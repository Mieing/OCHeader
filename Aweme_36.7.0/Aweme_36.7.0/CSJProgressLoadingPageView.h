@class UIView, CSJMaterialMeta, UIImageView, UILabel, CALayer, CSJNumerAnimationLabel;

@interface CSJProgressLoadingPageView : CSJBaseLoadingPageView {
    BOOL _isPortrait;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) CSJNumerAnimationLabel *progressLabel;
@property (retain, nonatomic) UILabel *percentLabel;
@property (retain, nonatomic) CALayer *totalLine;
@property (retain, nonatomic) UIView *progressLine;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;

- (void)p_updateTitleText;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPortrait;
- (void)layoutSubviews;
- (void)setIsPortrait:(BOOL)a0;

@end
