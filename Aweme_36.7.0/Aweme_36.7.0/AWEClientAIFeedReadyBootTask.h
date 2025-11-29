@class NSString;

@interface AWEClientAIFeedReadyBootTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clientPortraitInit;
+ (void)clientFeatureCenterInit;
+ (void)onClientAITaskExecute;
+ (void)setupSmartServices;
+ (void)setupAppLogTracker;
+ (void)setupClientAILLMResourceManager;
+ (void)execute;


@end
