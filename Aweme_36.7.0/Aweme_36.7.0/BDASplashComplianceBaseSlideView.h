@class NSDictionary;

@interface BDASplashComplianceBaseSlideView : BDASplashComplianceBaseView

@property (nonatomic) unsigned long long slideDirection;
@property (nonatomic) double slideDistance;
@property (nonatomic) double realSlideDistance;
@property (nonatomic) double slideTrackDistance;
@property (nonatomic) double realSlideTrackDistance;
@property (nonatomic) struct CGPoint { double x; double y; } slideTrackPreviousPosition;
@property (nonatomic) long long slideStrategy;
@property (nonatomic) double slideStartTime;
@property (copy, nonatomic) NSDictionary *adExtraData;

- (void)basePanGestureSuccess:(id)a0;
- (void)setSlideAndTrackDistanceWithDict:(id)a0;
- (void)basePanGesture:(id)a0;
- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)calculateTrackDistanceForGesture:(id)a0;
- (BOOL)enableSlide:(id)a0;
- (void)basePanGestureFail:(id)a0;
- (BOOL)enableSlideTrack:(id)a0;
- (void)splashTrackNoAdEventWithGesture:(id)a0 isValid:(BOOL)a1;
- (void).cxx_destruct;

@end
