@class UILabel, UIImageView, UIView;

@interface WAScreenBrightnessStateView : UIView {
    UILabel *_nameLabel;
    UIImageView *_brightIcon;
    UIView *_progressContainerView;
    float _curBrightValue;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateScreenBrightness;
- (void).cxx_destruct;

@end
