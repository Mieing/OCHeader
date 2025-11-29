@class CSJMaterialMeta, UIImageView, UILabel, CSJNumerAnimationLabel;

@interface CSJScaleLoadingPageView : CSJBaseLoadingPageView {
    BOOL _isPortrait;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) CSJNumerAnimationLabel *progressLabel;
@property (retain, nonatomic) UILabel *percentLabel;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (copy, nonatomic) id /* block */ clickBlock;

- (id /* block */)adButtonClickBlock;
- (void)setAdButtonClickBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPortrait;
- (void)layoutSubviews;
- (void)setIsPortrait:(BOOL)a0;

@end
