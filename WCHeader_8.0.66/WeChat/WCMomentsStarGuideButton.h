@class UIImageView, WCMomentsStarGuideViewModel, MMUIButton, MMUILabel;

@interface WCMomentsStarGuideButton : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) WCMomentsStarGuideViewModel *viewModel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_layoutScene;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)_layoutSubviews;
- (double)_calculateHeight;
- (void).cxx_destruct;

@end
