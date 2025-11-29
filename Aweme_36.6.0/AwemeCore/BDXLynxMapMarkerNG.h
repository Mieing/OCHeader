@class BDXLynxMapNG, BDXLynxMapAnnotationModel;

@interface BDXLynxMapMarkerNG : LynxUI

@property (retain, nonatomic) BDXLynxMapAnnotationModel *annoatationModel;
@property (nonatomic) BOOL isUserMarker;
@property (weak, nonatomic) BDXLynxMapNG *map;

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__90362;
+ (id)__lynx_prop_config__91063;
+ (id)__lynx_prop_config__91564;

- (void)annotationData:(id)a0 requestReset:(BOOL)a1;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 withLayoutAnimation:(BOOL)a4;
- (BOOL)notifyParent;
- (void)refreshMarker:(id)a0 withResult:(id /* block */)a1;
- (void)userMarker:(BOOL)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
