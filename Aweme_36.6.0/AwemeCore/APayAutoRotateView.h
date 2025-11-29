@interface APayAutoRotateView : UIView {
    BOOL enableAutoRotate;
}

- (void)doOrientationChanged:(id)a0;
- (void)enableAutoRotate:(BOOL)a0;
- (void)doAutoRotateView;
- (void)doAutoRotateChanged;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMainViewRect:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
