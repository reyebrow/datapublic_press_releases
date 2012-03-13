<?php
/**
 * @file
 * datapublic_press_releases.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datapublic_press_releases_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:press-releases
  $menu_links['main-menu:press-releases'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'press-releases',
    'router_path' => 'press-releases',
    'link_title' => 'Press Releases',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'media-room',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Media Room');
  t('Press Releases');


  return $menu_links;
}
