@class NSString;

@interface AFDLongPressFastSpeedHelper : NSObject <AFDLongPressFastSpeedHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (void)setLongPressFastSpeedMaskViewFrenquencyWithCompletionBlock:(id /* block */)a0;
+ (id)speedIconWithPlaySpeed:(double)a0;
+ (double)padFastSpeedHotAreaRange;
+ (double)fastSpeedHotAreaPercent;
+ (id)longPressEnterPureModeText;
+ (BOOL)shouldShowLongPressFastSpeedWithGesture:(id)a0 model:(id)a1 referString:(id)a2 enterFrom:(id)a3;
+ (BOOL)shouldShowLongPressFastSpeedForView:(id)a0 model:(id)a1;
+ (double)fastSpeedHotAreaPercentWithModel:(id)a0;
+ (BOOL)pinchLongPressHotAreaOptEnable;
+ (BOOL)canUsePinchPressHotAreaOptWithModel:(id)a0;
+ (BOOL)feedLongPressHotAreaOptEnable;
+ (long long)feedLongPressHotAreaWidth;
+ (long long)longPressFastSpeedMaskViewMaxShowingThreshold;
+ (long long)longPressAutoEnterPureModeToastMaxShowingThreshold;
+ (BOOL)shouldInteractionLongPressEnableFastSpeedWithModel:(id)a0 referString:(id)a1;
+ (id)contentTypeWithModel:(id)a0;
+ (BOOL)canFeedLongPressFastSpeedWithGesture:(id)a0 model:(id)a1 referString:(id)a2 enterFrom:(id)a3;
+ (double)fastSpeedTriggerTime;
+ (void)setLongPressAutoEnterPureModeFrenquencyWithCompletionBlock:(id /* block */)a0;
+ (BOOL)shouldShowFastSpeedInPinchWithGesture:(id)a0 model:(id)a1 referString:(id)a2 enterFrom:(id)a3;
+ (long long)fastSpeedViewTypeWithModel:(id)a0 referString:(id)a1;
+ (BOOL)shouldEnterPureModeWithModel:(id)a0 referString:(id)a1;
+ (double)longPressFastSpeedValue;

- (id)aAWEPadModuleAdapter;
- (id)aAWEPlayInteractionAdapter;

@end
