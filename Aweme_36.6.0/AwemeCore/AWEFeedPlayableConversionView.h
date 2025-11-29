@class CAGradientLayer, NSString, UIImageView, UILabel, UIView, AWEFeedPlayableTransformBarModel;

@interface AWEFeedPlayableConversionView : UIView <CAAnimationDelegate, AWEFeedPlayableConversionView>

@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *adTagView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *downloadButton;
@property (retain, nonatomic) UIView *downloadButtonView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *downloadButtonHighlightView;
@property (retain, nonatomic) AWEFeedPlayableTransformBarModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ downloadBlock;
@property (copy, nonatomic) id /* block */ otherClickBlock;

- (void)constraintSubviews;
- (void)configWithModel:(id)a0 type:(id)a1;
- (void)changeDownloadButtonBgColor;
- (void)highlightDownloadButton;
- (void)changeDownloadButtonBgColorWithoutAnimation;
- (void)conversionTapped:(id)a0;
- (void)p_configDownloadButtonBgColor;
- (void)downloadButtonClicked;
- (void)p_configBackground;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
