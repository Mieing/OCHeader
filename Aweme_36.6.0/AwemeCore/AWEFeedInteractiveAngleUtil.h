@class NSNumber, NSMutableDictionary, NSString;

@interface AWEFeedInteractiveAngleUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *gestureAngleConfigDict;
@property (retain, nonatomic) NSNumber *adRefinementStatus;
@property (copy, nonatomic) NSString *lastAngleKey;
@property (copy, nonatomic) NSNumber *lastAngle;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;

+ (unsigned long long)directionForPan:(id)a0;
+ (id)interactiveGestureTanValue;
+ (long long)calculateSlideAngleWithPan:(id)a0;
+ (id)sharedInstance;

- (BOOL)awe_shouldAdjustDirectionWithPanGestureRecognizer:(id)a0 referString:(id)a1 awemeModel:(id)a2;
- (unsigned long long)awe_directionWithGestureRecognizer:(id)a0 referString:(id)a1 awemeModel:(id)a2;
- (void)setupGestureAngleConfigDict;
- (id)gestureAngleConfigSetting;
- (void)setupGestureAngleEnhanceConfigDict;
- (BOOL)enableDefaultConfig;
- (id)parseVideoTypeFromModel:(id)a0;
- (id)angleConfigModelWithReferString:(id)a0 awemeModel:(id)a1;
- (void)recordLastAngleWithGesture:(id)a0 key:(id)a1;
- (id)awe_adjustDirectionWithReferString:(id)a0 awemeModel:(id)a1;
- (id)getLastAngleByKey:(id)a0;
- (struct CGPoint { double x0; double x1; })getHPSlidingStartPointByKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
