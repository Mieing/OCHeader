@class MMListenFeedIdListResponse, MMListenCategoryItem;

@interface MMListenAudioChatPlayResponse_PlaylistResult : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) MMListenFeedIdListResponse *feedIdListResp;

+ (void)initialize;

@end
