@class NSArray, AWEAnimatedNumberScrollConfig;

@interface AWEAnimatedNumberScrollView : UIView

@property (retain, nonatomic) AWEAnimatedNumberScrollConfig *config;
@property (retain, nonatomic) NSArray *digitScrollViews;
@property (nonatomic) double digitHeight;
@property (nonatomic) long long targetNumber;

+ (id)digitsForNumber:(long long)a0;

- (void)setupDigitScrollViews;
- (void)setupNumberLabelsWithDefaultNumber:(long long)a0 inScrollView:(id)a1;
- (void)startAnimationWithDuration:(double)a0 digitStartDelays:(id)a1;
- (void).cxx_destruct;
- (void)commonInit;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;

@end
