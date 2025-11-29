@interface AWEVideoRouterUtils : NSObject

+ (BOOL)canStartVideoFlow;
+ (BOOL)recorderIsInWindowHierarchy;
+ (BOOL)isInRecordTask;
+ (BOOL)isInsideRecorder;
+ (void)showPublishingToast:(id)a0;
+ (id)itemCacheDirectory;
+ (BOOL)currentIsInspirationPathWithViewController:(id)a0;
+ (void)setRecordPreparationTrigger:(id)a0;
+ (BOOL)hasACCViewControllerInViewStack;
+ (BOOL)hasACCViewControllerInViewStackOf:(id)a0;
+ (BOOL)isInBlackListWithVC:(id)a0;
+ (BOOL)diskMemoryPanic;
+ (id)diskMemoryPanicToast;
+ (void)showFobidReenterRecorderToast;
+ (void)showDraftForbidEnterRecorderToast;
+ (id)latestRecordPreparationTrigger;
+ (void)setupEffectGeneralParamsFetchingBlock;
+ (void)setEffectShaderCachePath;
+ (void)clearEffectShaderCacheIfNeed;
+ (BOOL)isInCreativeWorkflow;

@end
