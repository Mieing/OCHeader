@class BaseRequest, MMListenMusicBaseRequest, NSMutableArray, MMListenPreloadArg;

@interface MMListenDiscoverItemRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *ctxs;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) MMListenPreloadArg *preloadArg;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;

+ (void)initialize;

@end
