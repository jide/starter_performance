<?php
/**
 * @file
 * starter_performance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function starter_performance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minify_html';
  $strongarm->value = 1;
  $export['minify_html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minify_js';
  $strongarm->value = 1;
  $export['minify_js'] = $strongarm;

  return $export;
}
