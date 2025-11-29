@interface AWETeenHotSpotTracker : NSObject

+ (void)trackTrendingTopicShowWithModel:(id)a0 itemID:(id)a1 enterFrom:(id)a2 enterPosition:(id)a3 showType:(id)a4 extra:(id)a5;
+ (void)trackTrendingTopicShowWithModel:(id)a0 itemID:(id)a1 enterFrom:(id)a2;
+ (void)trackTrendingSwitchWithModel:(id)a0 enterMethod:(id)a1 rank:(unsigned long long)a2 hotSpotCount:(unsigned long long)a3;
+ (void)trackTrendingDuration:(double)a0 fromGroupID:(id)a1 previousPage:(id)a2 enterFrom:(id)a3;
+ (void)trackTrendingTopicClickWithModel:(id)a0 itemID:(id)a1 enterFrom:(id)a2;
+ (void)trackTrendingListShowWithHotSpotCount:(unsigned long long)a0;
+ (void)trackTrendingTopicShowWithModel:(id)a0 itemID:(id)a1 enterFrom:(id)a2 enterPosition:(id)a3;
+ (void)trackTrendingTopicShowWithModel:(id)a0 itemID:(id)a1 enterFrom:(id)a2 enterPosition:(id)a3 showType:(id)a4;
+ (void)trackTrendingTopicClickWithModel:(id)a0 itemID:(id)a1 enterFrom:(id)a2 enterPosition:(id)a3 showType:(id)a4;
+ (void)trackTrendingTopicClickWithModel:(id)a0 itemID:(id)a1 enterFrom:(id)a2 enterPosition:(id)a3 showType:(id)a4 extra:(id)a5;
+ (void)trackTrendingPageShowWithModel:(id)a0 itemID:(id)a1 enterFrom:(id)a2;

@end
