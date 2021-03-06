<?php
/**
 * @file
 * Template for flukestrap aron.
 *
 * Based on Radix brenham, the header area is not
 * inside a container so that the banner can span full width.
 * Central area is 8 columns, unlike the Darwin Template which
 * is 12 columns. This is to accomodate the atypical Beha
 * article layout
 * 
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display aron clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="aron-header">
      <?php print $content['header']; ?>
  </div>

  <div class="container">
    <div class="row">

      <div class="col-md-8 col-sm-12 col-md-offset-2 aron-contentmain">
          <?php print $content['contentmain']; ?>
      </div>

    </div><!-- /.row -->
  </div><!-- /.container -->

</div><!-- /.aron -->