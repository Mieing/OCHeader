@class UIImageView, MMUILabel, WCMomentsPostShareBaseViewModel;

@interface WCMomentsPostShareButton : MMUIButton

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) WCMomentsPostShareBaseViewModel *viewModel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_layoutScene;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)_layoutSubviews;
- (double)_calculateHeight;
- (void).cxx_destruct;

@end
