@class NSString;

@interface IESLLBusinessLaunchTaskBizService : HTSService <IESLLBusinessLaunchTaskBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bizAbilityManagerPremainTask;
+ (void)cubeAdapterStaticLoadTask;
+ (void)ditoServiceCenterStaticLoadTask;
+ (void)poiLoadingViewStaticLoadTask;
+ (void)cleanGeckoStaticLoadTask;
+ (void)tempoStaticLoadTask;
+ (void)tempoFirstFrameTask;


@end
