<?php
/**
 * @file
 * minun_hieno_featureni.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function minun_hieno_featureni_taxonomy_default_vocabularies() {
  return array(
    'keitti_' => array(
      'name' => 'Keittiö',
      'machine_name' => 'keitti_',
      'description' => 'Keittiön huonekalut',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
