@class NSDate, NSString, NSArray, AWEPerformanceDiskStatistics, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface AWEDiskCleanViewModel : NSObject <ACCDraftMessage>

@property (retain, nonatomic) NSLock *cleanLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) double draftsSize;
@property (nonatomic) long long draftCount;
@property (nonatomic) double chatSize;
@property (nonatomic) BOOL chatSizeInited;
@property (copy, nonatomic) id /* block */ overallcalculateProgress;
@property (copy, nonatomic) id /* block */ overallCalculateCompletion;
@property (copy, nonatomic) id /* block */ businessCalculateCompletion;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSArray *datas;
@property (nonatomic) double cacheSize;
@property (nonatomic) double offlineVideoSize;
@property (nonatomic) double necessarySize;
@property (nonatomic) double appSize;
@property (nonatomic) double totalSize;
@property (nonatomic) double availableSize;
@property (nonatomic) BOOL tracked;
@property (retain, nonatomic) AWEPerformanceDiskStatistics *cleanStatistics;
@property (retain, nonatomic) NSDate *lastCleanupDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)draftHasTransitionedNormalByUserWithDraftId:(id)a0 launchFrom:(unsigned long long)a1 extraInfo:(id)a2;
- (void)observeDeleteDrafts;
- (void)observeChatSize;
- (void)updateDraftSize;
- (void)updateOfflineVideoSize;
- (void)updateOldOfflineVideoSize;
- (BOOL)isChatManualCleanup;
- (id)chatDiskManageTitle;
- (id)chatDiskManageSubtitle;
- (void)updateChatSize:(double)a0;
- (void)constructAllDatas;
- (void)updateDiskSize:(double)a0;
- (BOOL)isDiskManualCleanup;
- (double)sizeStatsCooldown;
- (id)initWithDiskOverallCalculateProgress:(id /* block */)a0 overallCalculateCompletion:(id /* block */)a1 businessCalculateCompletion:(id /* block */)a2;
- (void)initDetailData;
- (void)prepareCacheData;
- (void)prepareDraftsData;
- (void)prepareChatData;
- (void)cleanResourceWithCleanType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)cleanResourceWithCleanType:(unsigned long long)a0 checkCancelForProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (id)constructCleanModelWithTitle:(id)a0 detail:(id)a1 desc:(id)a2 type:(unsigned long long)a3 haveCache:(BOOL)a4;
- (void)trackDeviceData;
- (BOOL)needCountSize;
- (void).cxx_destruct;
- (void)dealloc;

@end
