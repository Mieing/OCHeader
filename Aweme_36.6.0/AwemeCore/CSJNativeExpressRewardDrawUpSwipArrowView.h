@class UIImageView, UILabel;

@interface CSJNativeExpressRewardDrawUpSwipArrowView : UIView {
    UIImageView *_pathImageView;
    UIImageView *_ringImageView;
    UIImageView *_handImageView;
    UIImageView *_lineImageView;
    UILabel *_tipLabel;
}

- (void)_setupPropertyWithAnimation:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setupUI;

@end
