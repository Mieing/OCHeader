@class MMListenSimplePlaylistInfo, NSString, MMListenCircleCategoryInfo, NSData, MMListenCircleTopicItem, NSMutableArray, BaseResponse;

@interface MMListenCircleFeedResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) MMListenCircleCategoryInfo *feedPlaylist;
@property (retain, nonatomic) NSMutableArray *feedItems;
@property (retain, nonatomic) MMListenCircleTopicItem *topicItem;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) BOOL isFinished;
@property (retain, nonatomic) MMListenSimplePlaylistInfo *circlePlaylist;

+ (void)initialize;

@end
