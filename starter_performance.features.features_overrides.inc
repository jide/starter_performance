<?php
/**
 * @file
 * starter_performance.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function starter_performance_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.block_cache.value"] = 1;
  $overrides["variable.cache.value"] = 1;
  $overrides["variable.jquery_update_compression_type.value"] = 'min';
  $overrides["variable.less_devel.value"] = 0;
  $overrides["variable.preprocess_css.value"] = 1;
  $overrides["variable.preprocess_js.value"] = 1;

 return $overrides;
}
