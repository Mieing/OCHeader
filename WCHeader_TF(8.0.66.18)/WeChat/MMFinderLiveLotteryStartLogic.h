@class NSString, MMFinderLiveTaskId;

@interface MMFinderLiveLotteryStartLogic : NSObject <WCCoinConsumeLogicDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSString *billNo;
@property (nonatomic) BOOL saveToLotteryPanel;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) id /* block */ loadingBlock;
@property (copy, nonatomic) id /* block */ stopLoadingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)startLotteryWithCreateInfo:(id)a0 saveToLotteryPanel:(BOOL)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)consumeCoinWithBillNo:(id)a0 respBuff:(id)a1 totalWecoinAmount:(long long)a2;
- (void)consumeDidSuccess:(id)a0 result:(id)a1;
- (void)consumeDidFail:(id)a0 error:(id)a1;
- (void)consumeDidCancel:(id)a0;
- (id)liveTask;
- (void)pollingLotteryGiftPackageOrderBillStatus;
- (void).cxx_destruct;

@end
