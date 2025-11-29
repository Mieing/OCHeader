@class NSString, NSData, FinderLiveGift, RewardExtContext;

@interface FinderLiveAppMsgComboLiveRewardInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *rewardProductId;
@property (retain, nonatomic) FinderLiveGift *rewardGift;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int comboProductCount;
@property (retain, nonatomic) NSString *comboId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSData *extInfo;
@property (retain, nonatomic) RewardExtContext *rewardExtContext;

+ (void)initialize;

@end
