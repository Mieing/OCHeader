@class RecentPlayRecommendBanner, RankSummary, RecentPlayCommText, RecommendTopic, GiftCenter;

@interface RecentPlayGameInfo_SubItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) RecentPlayRecommendBanner *recommendBanner;
@property (retain, nonatomic) GiftCenter *giftCenter;
@property (retain, nonatomic) RecommendTopic *recommendTopic;
@property (retain, nonatomic) RankSummary *rankSummary;
@property (retain, nonatomic) RecentPlayCommText *commText;

+ (void)initialize;

@end
