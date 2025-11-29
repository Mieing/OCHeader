@class NSString;

@interface ContactProfileRecommendSelectNewView : ContactProfileRecommendSelectView

@property (retain, nonatomic) NSString *recommendLogoSvg;

- (double)getBottonBuffer;
- (id)addButton:(id)a0;
- (struct CGPoint { double x0; double x1; })getPositionForView:(id)a0 withWidth:(double)a1 behindButton:(id)a2;
- (void).cxx_destruct;

@end
