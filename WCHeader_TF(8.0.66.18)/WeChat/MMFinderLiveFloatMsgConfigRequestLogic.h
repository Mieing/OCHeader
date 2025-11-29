@class MMFinderLiveTask, MMFinderLiveFloatMsgResourceManager, MMFinderLiveTaskId;

@interface MMFinderLiveFloatMsgConfigRequestLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) unsigned long long requestSeq;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) unsigned long long wecoinBalance;
@property (nonatomic) BOOL isFetchingWecoinBalance;
@property (nonatomic) BOOL isWecoinBalanceUpdated;
@property (retain, nonatomic) MMFinderLiveFloatMsgResourceManager *resourceMgr;
@property (copy, nonatomic) id /* block */ floatMsgConfigUpdateCallback;

+ (unsigned long long)getExtraInfoContent:(id)a0;

- (id)initWithTaskId:(id)a0;
- (void)fetchFloatMsgConfig:(long long)a0;
- (void)clearExpiredStayTimeFloatMsgAndRefetchIfNeeded;
- (void)refreshWecoinBalanceIfNeeded;
- (long long)canSendFloatMsg:(id)a0;
- (void)increaseRequestSeq;
- (id)getSortedFloatMsgList:(id)a0;
- (void)syncLocalFileStateFromFloatMsgList:(id)a0 toList:(id)a1;
- (void)downloadFloatMsgDecorationResourcesWithSuccessCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
