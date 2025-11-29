@class MMListenRecommendInfo, MMListenCategoryItem, MMListenCheckSpamResponse, MMListenPlayResponse, MMListenFeedIdListResponse, MMListenItem;

@interface MMListenMusicChatPlayResponse_PlaylistResult : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) MMListenFeedIdListResponse *feedIdListResp;
@property (retain, nonatomic) MMListenPlayResponse *playResp;
@property (retain, nonatomic) MMListenCheckSpamResponse *checkSpamResp;
@property (nonatomic) int type;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;

+ (void)initialize;

@end
