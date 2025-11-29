@class MMStarRatingViewConfiguration, UIView;
@protocol MMStarRatingViewDelegate;

@interface MMStarRatingView : UIView

@property (retain, nonatomic) MMStarRatingViewConfiguration *configuration;
@property (retain, nonatomic) UIView *foregroundContentView;
@property (retain, nonatomic) UIView *backgroundContentView;
@property (weak, nonatomic) id<MMStarRatingViewDelegate> delegate;
@property (nonatomic) double scorePercent;

- (id)initWithConfiguration:(id)a0;
- (void)setupSubviews;
- (id)createContentViewWithImage:(id)a0;
- (void)onTapRateView:(id)a0;
- (void).cxx_destruct;

@end
