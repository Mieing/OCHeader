@interface DanceUI._UIContentUnavailableWrapperView : UIView <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ _contentView;
    void /* unknown type, empty encoding */ _backgroundView;
    void /* unknown type, empty encoding */ _viewForConfiguration;
    void /* unknown type, empty encoding */ _parentScrollViews;
    void /* unknown type, empty encoding */ _viewController;
}

- (void).cxx_destruct;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
