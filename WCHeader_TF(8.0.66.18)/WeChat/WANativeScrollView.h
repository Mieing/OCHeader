@class UIView;

@interface WANativeScrollView : UIView {
    UIView *_contentView;
}

- (id)createContent;
- (void)addSubview:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)getChildView:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
