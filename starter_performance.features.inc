<?php
/**
 * @file
 * starter_performance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function starter_performance_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function starter_performance_strongarm_alter(&$data) {
  if (isset($data['block_cache'])) {
    $data['block_cache']->value = 1; /* WAS: 0 */
  }
  if (isset($data['cache'])) {
    $data['cache']->value = 1; /* WAS: 0 */
  }
  if (isset($data['jquery_update_compression_type'])) {
    $data['jquery_update_compression_type']->value = 'min'; /* WAS: 'none' */
  }
  if (isset($data['less_devel'])) {
    $data['less_devel']->value = 0; /* WAS: 1 */
  }
  if (isset($data['preprocess_css'])) {
    $data['preprocess_css']->value = 1; /* WAS: 0 */
  }
  if (isset($data['preprocess_js'])) {
    $data['preprocess_js']->value = 1; /* WAS: 0 */
  }
}
