@class NSError, NSString, MMFinderLiveRewardGiftItem, NSData, WCFinderContact, PackageResourceInfo_ProductBatchInfo, MMFinderLiveTaskId, NSMutableArray;

@interface MMFinderLiveRewardRequestObject : NSObject <WCCoinConsumeLogicDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) WCFinderContact *rewardRecipientContact;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *rewardGiftItem;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *rewardComboId;
@property (retain, nonatomic) NSString *rewardProductId;
@property (retain, nonatomic) NSString *styleId;
@property (nonatomic) unsigned int rewardProductCount;
@property (nonatomic) unsigned int rewardAmountInWecoin;
@property (nonatomic) unsigned long long sendRequestTime;
@property (nonatomic) BOOL comboFinished;
@property (retain, nonatomic) NSString *rewardBillNo;
@property (retain, nonatomic) NSData *rewardRequestBuffer;
@property (retain, nonatomic) NSData *rewardExtInfo;
@property (retain, nonatomic) NSError *requestError;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ successCompletion;
@property (copy, nonatomic) id /* block */ freeGiftFailedBlock;
@property (retain, nonatomic) NSMutableArray *rewardPrepareBuff;
@property (retain, nonatomic) PackageResourceInfo_ProductBatchInfo *batchInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRewardRequest;
- (void)consumeCoinWithProductId:(id)a0 billNo:(id)a1 respBuff:(id)a2;
- (void)consumeDidSuccess:(id)a0 result:(id)a1;
- (void)consumeDidFail:(id)a0 error:(id)a1;
- (void)consumeDidCancel:(id)a0;
- (void).cxx_destruct;

@end
