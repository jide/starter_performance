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
  $strongarm->name = 'minify_captured_js';
  $strongarm->value = array(
    'misc/drupal.js' => array(
      'file_path' => 'misc/drupal.js',
      'file_name' => 'drupal.js',
      'minified_file_path' => 'sites/default/files/minify/drupal.min.js',
      'original_size' => 14542,
      'minified_size' => 4702,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/jquery_update/replace/jquery/1.8/jquery.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_update/replace/jquery/1.8/jquery.js',
      'file_name' => 'jquery.js',
      'minified_file_path' => 'sites/default/files/minify/jquery.min.js',
      'original_size' => 266881,
      'minified_size' => 141506,
      'status' => TRUE,
    ),
    'misc/jquery.once.js' => array(
      'file_path' => 'misc/jquery.once.js',
      'file_name' => 'jquery.once.js',
      'minified_file_path' => 'sites/default/files/minify/jquery.once.min.js',
      'original_size' => 2972,
      'minified_size' => 455,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/affix.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/affix.js',
      'file_name' => 'affix.js',
      'minified_file_path' => 'sites/default/files/minify/affix.min.js',
      'original_size' => 4101,
      'minified_size' => 2704,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/alert.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/alert.js',
      'file_name' => 'alert.js',
      'minified_file_path' => 'sites/default/files/minify/alert.min.js',
      'original_size' => 2227,
      'minified_size' => 1179,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/button.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/button.js',
      'file_name' => 'button.js',
      'minified_file_path' => 'sites/default/files/minify/button.min.js',
      'original_size' => 2974,
      'minified_size' => 1768,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/carousel.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/carousel.js',
      'file_name' => 'carousel.js',
      'minified_file_path' => 'sites/default/files/minify/carousel.min.js',
      'original_size' => 6525,
      'minified_size' => 4607,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/collapse.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/collapse.js',
      'file_name' => 'collapse.js',
      'minified_file_path' => 'sites/default/files/minify/collapse.min.js',
      'original_size' => 4871,
      'minified_size' => 3360,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/dropdown.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/dropdown.js',
      'file_name' => 'dropdown.js',
      'minified_file_path' => 'sites/default/files/minify/dropdown.min.js',
      'original_size' => 4384,
      'minified_size' => 2814,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/modal.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/modal.js',
      'file_name' => 'modal.js',
      'minified_file_path' => 'sites/default/files/minify/modal.min.js',
      'original_size' => 7939,
      'minified_size' => 5512,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/tooltip.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/tooltip.js',
      'file_name' => 'tooltip.js',
      'minified_file_path' => 'sites/default/files/minify/tooltip.min.js',
      'original_size' => 14641,
      'minified_size' => 10483,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/popover.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/popover.js',
      'file_name' => 'popover.js',
      'minified_file_path' => 'sites/default/files/minify/popover.min.js',
      'original_size' => 3259,
      'minified_size' => 1922,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/scrollspy.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/scrollspy.js',
      'file_name' => 'scrollspy.js',
      'minified_file_path' => 'sites/default/files/minify/scrollspy.min.js',
      'original_size' => 4640,
      'minified_size' => 3005,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/tab.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/tab.js',
      'file_name' => 'tab.js',
      'minified_file_path' => 'sites/default/files/minify/tab.min.js',
      'original_size' => 2998,
      'minified_size' => 1763,
      'status' => TRUE,
    ),
    'sites/all/themes/features/starter_theme/bootstrap/js/transition.js' => array(
      'file_path' => 'sites/all/themes/features/starter_theme/bootstrap/js/transition.js',
      'file_name' => 'transition.js',
      'minified_file_path' => 'sites/default/files/minify/transition.min.js',
      'original_size' => 1830,
      'minified_size' => 904,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/jquery_ajax_load/jquery_ajax_load.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_ajax_load/jquery_ajax_load.js',
      'file_name' => 'jquery_ajax_load.js',
      'minified_file_path' => 'sites/default/files/minify/jquery_ajax_load.min.js',
      'original_size' => 2468,
      'minified_size' => 1526,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.core.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/jquery.ui.core.js',
      'file_name' => 'jquery.ui.core.js',
      'minified_file_path' => 'sites/default/files/minify/jquery.ui.core.min.js',
      'original_size' => 8194,
      'minified_size' => 5183,
      'status' => TRUE,
    ),
    'misc/jquery.ba-bbq.js' => array(
      'file_path' => 'misc/jquery.ba-bbq.js',
      'file_name' => 'jquery.ba-bbq.js',
      'minified_file_path' => 'sites/default/files/minify/jquery.ba-bbq.min.js',
      'original_size' => 4117,
      'minified_size' => 3606,
      'status' => TRUE,
    ),
    'modules/overlay/overlay-parent.js' => array(
      'file_path' => 'modules/overlay/overlay-parent.js',
      'file_name' => 'overlay-parent.js',
      'minified_file_path' => 'sites/default/files/minify/overlay-parent.min.js',
      'original_size' => 37713,
      'minified_size' => 16119,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/admin_menu/admin_devel/admin_devel.js' => array(
      'file_path' => 'sites/all/modules/contrib/admin_menu/admin_devel/admin_devel.js',
      'file_name' => 'admin_devel.js',
      'minified_file_path' => 'sites/default/files/minify/admin_devel.min.js',
      'original_size' => 981,
      'minified_size' => 405,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/environment_indicator/tinycon.min.js' => array(
      'file_path' => 'sites/all/modules/contrib/environment_indicator/tinycon.min.js',
      'file_name' => 'tinycon.min.js',
      'minified_file_path' => 'sites/default/files/minify/tinycon.min.min.js',
      'original_size' => 4326,
      'minified_size' => 4141,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/environment_indicator/environment_indicator.js' => array(
      'file_path' => 'sites/all/modules/contrib/environment_indicator/environment_indicator.js',
      'file_name' => 'environment_indicator.js',
      'minified_file_path' => 'sites/default/files/minify/environment_indicator.min.js',
      'original_size' => 7419,
      'minified_size' => 6061,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/environment_indicator/color.js' => array(
      'file_path' => 'sites/all/modules/contrib/environment_indicator/color.js',
      'file_name' => 'color.js',
      'minified_file_path' => 'sites/default/files/minify/color.min.js',
      'original_size' => 2726,
      'minified_size' => 1612,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/lazyloader/jquery.lazyloader.js' => array(
      'file_path' => 'sites/all/modules/contrib/lazyloader/jquery.lazyloader.js',
      'file_name' => 'jquery.lazyloader.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/contrib/twitter_bootstrap_modal/twitter_bootstrap_modal.js' => array(
      'file_path' => 'sites/all/modules/contrib/twitter_bootstrap_modal/twitter_bootstrap_modal.js',
      'file_name' => 'twitter_bootstrap_modal.js',
      'minified_file_path' => 'sites/default/files/minify/twitter_bootstrap_modal.min.js',
      'original_size' => 2213,
      'minified_size' => 1805,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/devel/devel_krumo_path.js' => array(
      'file_path' => 'sites/all/modules/contrib/devel/devel_krumo_path.js',
      'file_name' => 'devel_krumo_path.js',
      'minified_file_path' => 'sites/default/files/minify/devel_krumo_path.min.js',
      'original_size' => 2191,
      'minified_size' => 1365,
      'status' => TRUE,
    ),
    'modules/contextual/contextual.js' => array(
      'file_path' => 'modules/contextual/contextual.js',
      'file_name' => 'contextual.js',
      'minified_file_path' => 'sites/default/files/minify/contextual.min.js',
      'original_size' => 1803,
      'minified_size' => 1114,
      'status' => TRUE,
    ),
    'misc/textarea.js' => array(
      'file_path' => 'misc/textarea.js',
      'file_name' => 'textarea.js',
      'minified_file_path' => 'sites/default/files/minify/textarea.min.js',
      'original_size' => 919,
      'minified_size' => 713,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/jquery_update/replace/ui/external/jquery.cookie.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_update/replace/ui/external/jquery.cookie.js',
      'file_name' => 'jquery.cookie.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/contrib/jquery_update/replace/misc/jquery.form.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_update/replace/misc/jquery.form.js',
      'file_name' => 'jquery.form.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'misc/progress.js' => array(
      'file_path' => 'misc/progress.js',
      'file_name' => 'progress.js',
      'minified_file_path' => 'sites/default/files/minify/progress.min.js',
      'original_size' => 3111,
      'minified_size' => 1627,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/jquery_update/js/jquery_update.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_update/js/jquery_update.js',
      'file_name' => 'jquery_update.js',
      'minified_file_path' => 'sites/default/files/minify/jquery_update.min.js',
      'original_size' => 301,
      'minified_size' => 267,
      'status' => TRUE,
    ),
    'misc/ajax.js' => array(
      'file_path' => 'misc/ajax.js',
      'file_name' => 'ajax.js',
      'minified_file_path' => 'sites/default/files/minify/ajax.min.js',
      'original_size' => 22762,
      'minified_size' => 9244,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/admin_menu/admin_menu.js' => array(
      'file_path' => 'sites/all/modules/contrib/admin_menu/admin_menu.js',
      'file_name' => 'admin_menu.js',
      'minified_file_path' => 'sites/default/files/minify/admin_menu.min.js',
      'original_size' => 12539,
      'minified_size' => 6757,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js' => array(
      'file_path' => 'sites/all/modules/contrib/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js',
      'file_name' => 'admin_menu_toolbar.js',
      'minified_file_path' => 'sites/default/files/minify/admin_menu_toolbar.min.js',
      'original_size' => 1578,
      'minified_size' => 1099,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/less/less.watch.js' => array(
      'file_path' => 'sites/all/modules/contrib/less/less.watch.js',
      'file_name' => 'less.watch.js',
      'minified_file_path' => 'sites/default/files/minify/less.watch.min.js',
      'original_size' => 2796,
      'minified_size' => 1022,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/blocklazyloader/jquery.blocklazyloader.js' => array(
      'file_path' => 'sites/all/modules/contrib/blocklazyloader/jquery.blocklazyloader.js',
      'file_name' => 'jquery.blocklazyloader.js',
      'minified_file_path' => 'sites/default/files/minify/jquery.blocklazyloader.min.js',
      'original_size' => 5299,
      'minified_size' => 3234,
      'status' => TRUE,
    ),
  );
  $export['minify_captured_js'] = $strongarm;

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
