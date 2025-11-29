@class UIFont, UILabel, MASConstraint, CALayer, UIView, CAGradientLayer, NSString, UIColor, NSAttributedString, NSNumber, IESECLiveImageURLModel, LOTAnimationView, NSArray, UIImageView;

@interface IESECLiveSaleProgressView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *progressTextLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) LOTAnimationView *progressEndAnimationView;
@property (retain, nonatomic) CAGradientLayer *progressTintLayer;
@property (retain, nonatomic) UIImageView *progressTextureImageView;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) MASConstraint *progressTextLabelRightConstraint;
@property (nonatomic) double progressTintMaxWidth;
@property (nonatomic) double pendingProgress;
@property (nonatomic) double pendingAnimated;
@property (copy, nonatomic) id /* block */ pendingCompletion;
@property (copy, nonatomic) NSAttributedString *attributedTitleText;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) double titleTextEdgeSpacing;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIFont *titleTextFont;
@property (nonatomic) BOOL enableProgressTextMove;
@property (copy, nonatomic) NSString *progressText;
@property (nonatomic) BOOL progressTextAdjustsFontSizeToFitWidth;
@property (nonatomic) double progressTextEdgeSpacing;
@property (retain, nonatomic) NSNumber *progressTextEdgeRightSpacing;
@property (retain, nonatomic) UIColor *progressTextColor;
@property (retain, nonatomic) UIFont *progressTextFont;
@property (retain, nonatomic) IESECLiveImageURLModel *iconInfo;
@property (nonatomic) double iconEdgeSpacing;
@property (retain, nonatomic) IESECLiveImageURLModel *progressTextureImage;
@property (nonatomic) double textureImageEdgeSpacing;
@property (retain, nonatomic) NSArray *progressGradientColors;
@property (retain, nonatomic) NSArray *progressGradientLocations;
@property (nonatomic) double progressTintEdgeSpacing;
@property (nonatomic) double progressStartInset;
@property (nonatomic) double progressEndInset;
@property (nonatomic) double progressValue;

- (void)updateWidth:(double)a0;
- (void)setGradientColors:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 locations:(id)a3;
- (void)setBackgroundColor:(id)a0 borderColor:(id)a1 borderWidth:(double)a2 cornerRadius:(double)a3;
- (void)stopProgressAnimation;
- (void)animateToWidth:(double)a0;
- (id)calculateLocationsWithWidth:(double)a0;
- (void)startProgressEndTopAnimationWithTargetWidth:(double)a0 duration:(double)a1;
- (void)setProgressTintLayerRadius:(double)a0 atCorners:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setProgressValue:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
