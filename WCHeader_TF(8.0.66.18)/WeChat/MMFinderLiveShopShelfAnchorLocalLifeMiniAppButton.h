@class UILabel, UIImageView, MMPaddingView;

@interface MMFinderLiveShopShelfAnchorLocalLifeMiniAppButton : UIButton

@property (retain, nonatomic) MMPaddingView *miniAppImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *jumpLabel;
@property (retain, nonatomic) UIImageView *arrowView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithHeaderViewModel:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (void)updateStyleIsHightLighted:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
