@class NSString, FinderLiveLotteryMethodItem, FinderLiveGiftMethodItem;

@interface PrizeConfigItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int itemId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) FinderLiveLotteryMethodItem *lotteryItem;
@property (retain, nonatomic) FinderLiveGiftMethodItem *giftItem;
@property (retain, nonatomic) NSString *titleStatusWording;

+ (void)initialize;

@end
