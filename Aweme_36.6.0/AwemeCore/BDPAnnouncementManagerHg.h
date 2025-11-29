@class NSRecursiveLock, NSMutableDictionary, NSString, NSMutableSet;

@interface BDPAnnouncementManagerHg : NSObject <BDPContainerLifeCycleMessage, BDPBootLifeCycleMessage, BDPWarmBootMessage>

@property (retain, nonatomic) NSMutableSet *needRequestAnnouncementSet;
@property (retain, nonatomic) NSRecursiveLock *setLock;
@property (retain, nonatomic) NSMutableDictionary *announcementVCCache;
@property (retain, nonatomic) NSRecursiveLock *cacheLock;
@property (retain, nonatomic) NSMutableSet *loadingGameSet;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedInstance;

- (void)applicationEnterForeGroundWithUniqueID:(id)a0;
- (void)applicationMetaFinishWithUniqueID:(id)a0 model:(id)a1 launchParam:(id)a2 schema:(id)a3 error:(id)a4;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)firstFrameDidShow:(id)a0;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)cleanCacheWithUniqueID:(id)a0;
- (id)session:(id)a0;
- (id)getModelsWithData:(id)a0 key:(id)a1 globalKey:(id)a2;
- (void)showNextViewControllerIfNeeded:(id)a0 uniqueID:(id)a1;
- (void)requestAnnouncementViewControllerIfNeeded:(id)a0 isColdBoot:(BOOL)a1;
- (id)announcementVCWithUniqueID:(id)a0;
- (id)modelFrequencyDic:(id)a0;
- (void)cacheAnnouncementVC:(id)a0 uniqueID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)aid;

@end
