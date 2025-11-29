@class NSRecursiveLock, NSArray, MMLiveTask, MMLiveEnergyRule, MMLiveEnergyAdjuster;
@protocol MMLiveEnergyControllerDelegate;

@interface MMLiveEnergyController : NSObject {
    NSArray *_lowPowerModeRules;
    NSRecursiveLock *_lock;
    long long _energyMode;
    MMLiveEnergyRule *_hitRule;
    MMLiveEnergyAdjuster *_adjuster;
}

@property (readonly, weak, nonatomic) MMLiveTask<MMLiveEnergyControllerDelegate> *liveTaskDelegate;
@property (readonly, nonatomic) long long energyMode;
@property (readonly, nonatomic) MMLiveEnergyRule *hitRule;
@property (readonly, nonatomic) BOOL lowPowerModeAvailable;

- (id)initWithLiveTaskDelegate:(id)a0;
- (void)dealloc;
- (void)checkMetricsInfo:(id)a0;
- (void)_changeEnergyModeWithRule:(id)a0;
- (id)_getHitRuleForEvaluating;
- (void)CameraCapture_evaluateCaptureFPS:(int *)a0;
- (void)CameraCapture_evaluateCaptureResolution:(long long *)a0;
- (void)VideoEncode_evaluateEncodeParams:(id)a0;
- (void)VideoEncode_evaluateEncodeFPS:(int *)a0;
- (void)VideoEncode_evaluateEncodeResolution:(long long *)a0;
- (void)VideoEncode_evaluateVideoBitrate:(int *)a0;
- (void)WeEffect_evaluteSettings:(void *)a0;
- (void)_WeEffect_evaluteFaceAlignmentSettings:(void *)a0 withHitRule:(id)a1;
- (void)_WeEffect_evaluteOcclusionSegmentSettings:(void *)a0 withHitRule:(id)a1;
- (void)Gift_evaluatePAGFrameRate:(float *)a0;
- (void)Gift_evaluateFullScreenGiftDisplaySpacingTimeInterval:(double *)a0;
- (void)BlurPowerMode_evaluateAdjustParamLevel:(int *)a0;
- (void).cxx_destruct;

@end
