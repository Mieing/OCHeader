@class FinderLiveQuestBonusResult_FeedPromotionInfo, FinderLiveQuestBonusResult_Heat, FinderLiveQuestBonusResult_VoucherInfo, FinderLiveQuestBonusResult_GrowthCardInfo;

@interface FinderLiveQuestBonusResult : WXPBGeneratedMessage

@property (nonatomic) unsigned int bonusType;
@property (retain, nonatomic) FinderLiveQuestBonusResult_Heat *heat;
@property (retain, nonatomic) FinderLiveQuestBonusResult_VoucherInfo *voucherInfo;
@property (retain, nonatomic) FinderLiveQuestBonusResult_GrowthCardInfo *growthCardInfo;
@property (retain, nonatomic) FinderLiveQuestBonusResult_FeedPromotionInfo *feedPromotionInfo;

+ (void)initialize;

@end
