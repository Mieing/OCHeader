@class MMListenCirclePostInfo, MMListenSimplePlaylistInfo, NSString, MMListenCircleRecommendUsersInfo;

@interface MMListenCircleFeedItem : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedId;
@property (nonatomic) int type;
@property (retain, nonatomic) MMListenCirclePostInfo *postInfo;
@property (retain, nonatomic) MMListenCircleRecommendUsersInfo *recommendUsersInfo;
@property (retain, nonatomic) MMListenSimplePlaylistInfo *playlist;
@property (retain, nonatomic) NSString *recommendId;

+ (void)initialize;

@end
