<?php
/**
 * @file
 * minun_hieno_featureni.features.inc
 */

/**
 * Implements hook_views_api().
 */
function minun_hieno_featureni_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function minun_hieno_featureni_node_info() {
  $items = array(
    'uusi_sis_lt_tyyppi' => array(
      'name' => t('Uusi sisältötyyppi'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
