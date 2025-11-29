@class NSString, NSData, WCFinderDataItem, NSMutableArray;

@interface WCFinderLiveRewardParams : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (copy, nonatomic) NSString *rewardRecipientUserName;
@property (copy, nonatomic) NSString *rewardComboId;
@property (copy, nonatomic) NSString *rewardProductId;
@property (retain, nonatomic) NSString *styleId;
@property (nonatomic) unsigned int rewardProductCount;
@property (nonatomic) unsigned int rewardAmountInWecoin;
@property (copy, nonatomic) NSString *rewardRequestId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) BOOL comboFinished;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (nonatomic) int rewardType;
@property (retain, nonatomic) NSData *rewardExtInfo;
@property (retain, nonatomic) NSMutableArray *prepareBuf;
@property (retain, nonatomic) NSString *clientMsgId;

- (void).cxx_destruct;

@end
