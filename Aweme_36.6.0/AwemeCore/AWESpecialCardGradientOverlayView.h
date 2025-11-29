@class NSArray;

@interface AWESpecialCardGradientOverlayView : UIView

@property (copy, nonatomic) NSArray *gradientColors;
@property (copy, nonatomic) NSArray *gradientLocations;

- (void)setupGradient;
- (void)updateColors:(id)a0 locations:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
