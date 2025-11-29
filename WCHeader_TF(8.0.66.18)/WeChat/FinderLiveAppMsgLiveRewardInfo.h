@class RewardExtContext, NSString, NSMutableArray, FinderLiveGestureInfo, FinderLiveGift;

@interface FinderLiveAppMsgLiveRewardInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *rewardProductId;
@property (nonatomic) unsigned int rewardProductCount;
@property (nonatomic) unsigned int rewardAmountInWecoin;
@property (retain, nonatomic) FinderLiveGift *rewardGift;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int comboProductCount;
@property (retain, nonatomic) NSString *comboId;
@property (retain, nonatomic) FinderLiveGestureInfo *gesture;
@property (retain, nonatomic) RewardExtContext *rewardExtContext;
@property (retain, nonatomic) NSMutableArray *giftItem;
@property (nonatomic) unsigned int pkExtraTimesMulti100;
@property (retain, nonatomic) NSMutableArray *attackItemList;
@property (nonatomic) unsigned int pkExtraTimesFlag;
@property (nonatomic) unsigned int extraPkValue;

+ (void)initialize;

@end
