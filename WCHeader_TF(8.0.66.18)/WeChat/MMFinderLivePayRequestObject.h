@class NSString, NSData, MMFinderLiveTaskId, NSError;
@protocol MMFinderLivePayMgrExt, MMPageSheetProvider;

@interface MMFinderLivePayRequestObject : NSObject <WCCoinConsumeLogicDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned long long sendRequestTime;
@property (retain, nonatomic) NSString *requestBillNo;
@property (retain, nonatomic) NSData *requestBuffer;
@property (retain, nonatomic) NSData *rewardExtInfo;
@property (retain, nonatomic) NSError *requestError;
@property (nonatomic) unsigned int wecoinAmount;
@property (copy, nonatomic) NSString *comboId;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) id<MMFinderLivePayMgrExt> logicOberver;
@property (weak, nonatomic) id<MMPageSheetProvider> buyCoinFromPage;
@property (weak, nonatomic) id<MMPageSheetProvider> consumeFromPage;
@property (readonly, nonatomic) unsigned long long buyCoinBusinessId;
@property (nonatomic) BOOL skipBuyCoinConfirmation;
@property (nonatomic) BOOL performBalanceCheck;
@property (retain, nonatomic) NSString *referenceId;
@property (nonatomic) BOOL differentialTopUp;
@property (nonatomic) int rechargeScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initDefaultData;
- (void)start;
- (void)retrieveBillToPayWithBlock:(id /* block */)a0;
- (void)consumeCoinWithProductId:(id)a0 billNo:(id)a1 respBuff:(id)a2;
- (void)consumeDidSuccess:(id)a0 result:(id)a1;
- (void)consumeDidFail:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
