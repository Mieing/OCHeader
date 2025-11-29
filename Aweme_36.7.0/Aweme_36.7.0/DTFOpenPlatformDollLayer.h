@class DTFOpenPlatformHeaderLayer;

@interface DTFOpenPlatformDollLayer : DTFOpenPlatformBaseLayer {
    DTFOpenPlatformHeaderLayer *_headLayer;
}

- (void)_buildShowLayer;
- (void)_addHeadLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_DTFLoloResizingWithOrigintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)resizeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
