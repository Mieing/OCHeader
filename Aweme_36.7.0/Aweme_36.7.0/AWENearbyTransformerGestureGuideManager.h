@class NSNumber;

@interface AWENearbyTransformerGestureGuideManager : NSObject

@property (retain, nonatomic) NSNumber *canShowGuide;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)enablePanGesture;
- (void)recordHasShowGuide;
- (long long)__times;
- (id)__transformerGestureGuideSettings;
- (long long)__numberOfDays;
- (long long)__dailyCount;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
