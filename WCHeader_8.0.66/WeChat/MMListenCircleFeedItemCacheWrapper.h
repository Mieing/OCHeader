@class NSString, MMListenCircleFeedItem, MMListenSimplePlaylistInfo;

@interface MMListenCircleFeedItemCacheWrapper : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenCircleFeedItem *feedItem;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) MMListenSimplePlaylistInfo *playlist;
@property (nonatomic) BOOL prefetch;

+ (void)initialize;

@end
