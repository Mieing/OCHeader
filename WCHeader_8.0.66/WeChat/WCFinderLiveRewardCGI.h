@class NSString, NSData, WCFinderDataItem, NSMutableArray, PackageResourceInfo_ProductBatchInfo;

@interface WCFinderLiveRewardCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (copy, nonatomic) NSString *rewardRecipientUserName;
@property (copy, nonatomic) NSString *rewardComboId;
@property (copy, nonatomic) NSString *rewardProductId;
@property (copy, nonatomic) NSString *styleId;
@property (nonatomic) unsigned int rewardProductCount;
@property (nonatomic) unsigned int rewardAmountInWecoin;
@property (copy, nonatomic) NSString *rewardRequestId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) BOOL comboFinished;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (nonatomic) int rewardType;
@property (retain, nonatomic) NSData *rewardExtInfo;
@property (retain, nonatomic) NSMutableArray *prepareBuf;
@property (retain, nonatomic) PackageResourceInfo_ProductBatchInfo *batchInfo;

- (id)initWithFinderTaskId:(id)a0 rewardParams:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (id)initWithFinderTaskId:(id)a0 liveCookies:(id)a1 rewardType:(int)a2 rewardRecipientUserName:(id)a3 rewardComboId:(id)a4 rewardProductId:(id)a5 styleId:(id)a6 rewardProductCount:(unsigned int)a7 rewardAmountInWecoin:(unsigned int)a8 requestId:(id)a9 comboFinished:(BOOL)a10 sessionBuffer:(id)a11 rewardExtInfo:(id)a12 rewardPrepareBuff:(id)a13 batchInfo:(id)a14 successBlock:(id /* block */)a15 failBlock:(id /* block */)a16;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
