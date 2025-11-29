@class NSMutableArray, NSString, BDPUniqueID, BDPRemoteDebugRuntimeEvent;
@protocol BDPDebugRuntimeProtocol;

@interface BDPRemoteDebugReplayManager : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *replayMessage;
@property (nonatomic) long long rebootFlag;
@property (weak, nonatomic) id<BDPDebugRuntimeProtocol> delegate;
@property (nonatomic) long long replayStatus;
@property (retain, nonatomic) BDPRemoteDebugRuntimeEvent *event;
@property (nonatomic) long long needReplayCount;
@property (nonatomic) long long replayedCount;
@property (nonatomic) BOOL isSecondReplay;
@property (nonatomic) double startReplayTime;
@property (copy, nonatomic) NSString *mpCaseID;
@property (copy, nonatomic) NSString *nextMpCaseID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL batchResult;
@property (retain, nonatomic) NSMutableArray *detailResult;

- (void)processReplayCommandParams:(id)a0 completion:(id /* block */)a1;
- (void)processReplayEntryWithCompletion:(id /* block */)a0;
- (void)rebuildSchema;
- (void)storageReplayCommadsWithCompletion:(id /* block */)a0;
- (void)processReplayCleanCacheWithCompletion:(id /* block */)a0;
- (void)cleanCacheIfNeed:(id)a0 completion:(id /* block */)a1;
- (id)separateEntryQuery:(id)a0;
- (void)startAutoTestReplayWithMessage:(id)a0 event:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
