<?php
/**
 * @file
 * Template for flukestrap toc.
 *
 * This differs from Radix Brenham in that the header area is not
 * inside a container, so the banner can span full width.
 * 
 * The footer is full width, and white. The related items are then in bootstrap container
 * 
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display toc clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="flukestrap-layouts-header panel-panel">
    <div class="panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>

  <div class="container">
    <div class="row">
      
      <div class="col-md-3 flukestrap-layouts-sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['sidebar']; ?>
        </div>
      </div>

      <div class="col-md-9 flukestrap-layouts-content panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['contentmain']; ?>
        </div>
      </div>

    </div><!-- /.row -->
  </div><!-- /.container -->


  <div class="flukestrap-layouts-footer panel-panel">
    <div class="panel-panel-inner">

  <div class="container">
    <div class="row">
      
      <div class="col-md-12 flukestrap-layouts-sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['footer']; ?>
        </div>
      </div>

    </div><!-- /.row -->
  </div><!-- 

    </div>
  </div>

</div><!-- /.toc -->