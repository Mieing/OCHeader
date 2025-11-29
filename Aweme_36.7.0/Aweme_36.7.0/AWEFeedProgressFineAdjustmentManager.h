@interface AWEFeedProgressFineAdjustmentManager : NSObject

+ (BOOL)shouldShock;
+ (double)previewEnlargeRatio;
+ (double)longPressTime;
+ (long long)sliderUpDistance;
+ (long long)adjustmentRatio;
+ (BOOL)isVideoDurationSatisfy:(id)a0;
+ (void)updateAfterEnterHintShowTimes;
+ (double)fineModelPreviewEnlargeRatio;
+ (BOOL)isFineAdjustmentVideoDurationSatisfy:(id)a0;
+ (id)beforeEnterHint;
+ (id)afterEnterHint;
+ (id)progressFineAdjustmentExp;
+ (long long)fineAdjustmentLimitTime;
+ (long long)afterEnterHintShowTimes;
+ (BOOL)shouldShowAfterEnterHint;
+ (unsigned long long)triggerMethod;
+ (id)sharedInstance;
+ (BOOL)showIcon;

@end
