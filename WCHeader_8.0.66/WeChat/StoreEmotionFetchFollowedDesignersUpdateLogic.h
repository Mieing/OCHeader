@class MemoryMappedKV, NSMutableDictionary, NSData, NSMutableArray, NSObject;
@protocol StoreEmotionFetchFollowedDesignersUpdateLogicDelegate, OS_dispatch_queue;

@interface StoreEmotionFetchFollowedDesignersUpdateLogic : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<StoreEmotionFetchFollowedDesignersUpdateLogicDelegate> delegate;
@property (nonatomic) BOOL active;
@property (nonatomic) int cgiFreq;
@property (retain, nonatomic) NSMutableArray *peddingPackageDesignerInfos;
@property (retain, nonatomic) NSMutableArray *peddingDesignerPidRequest;
@property (retain, nonatomic) NSMutableArray *currentDesignerPids;
@property (retain, nonatomic) NSData *currReqBuf;
@property (nonatomic) unsigned long long timeStart;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *worker;
@property (retain, nonatomic) NSMutableDictionary *eventIdMap;
@property (retain, nonatomic) MemoryMappedKV *mappedKV;

- (id)initWithServerPids:(id)a0 andDelegate:(id)a1;
- (void)startLogic;
- (void)tryUpdateNextDesingerInfo;
- (void)OnEmoticonStoreItemChanged:(id)a0;
- (void)OnEmoticonStoreItemGetDetailFailed:(id)a0;
- (void)onStoreEmotionGetDetailBack:(id)a0;
- (void)onUpdateAllUserFollowedDesignerInfoSuccess;
- (void)tryUpdateNextDesignerPids;
- (void)onGotPersonalDesignerMessageReturn:(id)a0;
- (void)onGotPersonalDesignerResponse:(id)a0;
- (void)onFetchDesignerPidsSuccess:(id)a0;
- (void)onFetchDesignerPidsFailed;
- (void)onFetchAllDesignerPidsFinish;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (unsigned int)getFetchCgiFreq;
- (unsigned int)getFetchLogicMinTimeInterval;
- (BOOL)shouldSkipCurrentFetch;
- (void)recordLastTimeOnFinish;
- (void).cxx_destruct;

@end
