@class MMFinderLiveCommonGuideTipsParams;

@interface MMFinderLiveCommonGuideTipsBackgroundView : MMRectTriangleArrowView

@property (retain, nonatomic) MMFinderLiveCommonGuideTipsParams *params;

- (id)initWithParams:(id)a0;
- (void)updateWithParams:(id)a0;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void).cxx_destruct;

@end
