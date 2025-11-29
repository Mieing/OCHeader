@interface CameraKit.CameraHollowView : UIView {
    void /* unknown type, empty encoding */ _activated;
    void /* unknown type, empty encoding */ _currentHollowPath;
    void /* unknown type, empty encoding */ _currentMainPath;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainMaskLayer;
}

@property (nonatomic) BOOL activated;

- (void)resetHollowPath:(id)a0;
- (void)resetHollowPath:(id)a0 animated:(BOOL)a1;
- (void)resetHollowPath:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
