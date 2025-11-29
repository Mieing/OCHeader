@class FinderLiveQuestBonusRule_GrowthCardInfo, FinderLiveQuestBonusRule_FeedPromotionInfo, FinderLiveQuestBonusRule_VoucherInfo, FinderLiveQuestBonusRule_Heat;

@interface FinderLiveQuestBonusRule : WXPBGeneratedMessage

@property (nonatomic) unsigned int bonusType;
@property (retain, nonatomic) FinderLiveQuestBonusRule_Heat *heat;
@property (retain, nonatomic) FinderLiveQuestBonusRule_VoucherInfo *voucherInfo;
@property (retain, nonatomic) FinderLiveQuestBonusRule_GrowthCardInfo *growthCardInfo;
@property (retain, nonatomic) FinderLiveQuestBonusRule_FeedPromotionInfo *feedPromotionInfo;

+ (void)initialize;

@end
