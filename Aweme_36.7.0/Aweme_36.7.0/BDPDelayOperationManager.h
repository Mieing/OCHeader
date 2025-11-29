@class NSString, NSMutableDictionary;

@interface BDPDelayOperationManager : NSObject <BDPBootLifeCycleMessage, BDPWebViewPageLifeCycleMessage>

@property (retain, nonatomic) NSMutableDictionary *queueDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)delayOperationSettings;
+ (void)performOperationAfterLCP:(id /* block */)a0 uniqueId:(id)a1 isMain:(BOOL)a2;
+ (void)prepareDelayOperationWithUniqueID:(id)a0;
+ (id)sharedInstance;

- (void)applicationWillResignActiveNotification;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)pageLCPArrive:(id)a0 pageID:(long long)a1;
- (id)getQueueWithUniqueID:(id)a0;
- (void)setQueue:(id)a0 WithUniqueID:(id)a1;
- (void)fireOperationWithUniqueID:(id)a0;
- (void)fireAllOperationQueue;
- (void).cxx_destruct;
- (id)init;

@end
