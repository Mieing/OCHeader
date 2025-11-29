@class NSString, NSArray, UIView, IESECLiveAtmosphereLinearGradientBackgroundView;

@interface IESECLiveAtmosphereView : UIView <IESECLiveCardAtmosphereView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECLiveAtmosphereLinearGradientBackgroundView *backgroundView;
@property (retain, nonatomic) UIView *contentsView;
@property (copy, nonatomic) NSArray *backgroundColors;
@property (copy, nonatomic) NSArray *backgroundGradientLocations;
@property (copy, nonatomic) NSArray *borderColors;
@property (copy, nonatomic) NSArray *borderGradientLocations;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double cornerRadiusHeightRatio;
@property (nonatomic) unsigned long long corners;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSArray *contentModels;
@property (nonatomic) BOOL backgroundWidthFitContents;

- (void)updateAtmosphereViewWithModel:(id)a0;
- (BOOL)showAnimationIfNeeded;
- (id)createBackgroundViewWithDefaultProperties;
- (void)remakeBackgroundViewConstraints;
- (void).cxx_destruct;
- (id)updateWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
