@class NSString;

@interface IESLiveEnhanceAlgorithmManager : NSObject <IESLiveInteractAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkEnhanceAlgorithmEnable;
+ (BOOL)currentPushStreamEnhanceAlgorithmIsOpen;
+ (void)changePushStreamEnhanceAlgorithmEnable:(BOOL)a0;
+ (void)startInteractiveWithScene:(unsigned long long)a0;
+ (void)endInteractiveWithScene:(unsigned long long)a0;
+ (void)changeAnchorGuideEnhanceAlgorithmEnable:(BOOL)a0;
+ (void)bindLiveInteractAction;
+ (void)realEnableEnhanceAlgorithm;
+ (void)realDisableEnhanceAlgorithm;
+ (void)realEnableAnchorGuideEnhanceAlgorithm;
+ (void)realDisableAnchorGuideEnhanceAlgorithm;
+ (void)trackPushStreamEnhanceAlgorithmState:(BOOL)a0 bitrateRatio:(double)a1 scene:(id)a2;


@end
