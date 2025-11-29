@class NSData, NSString, MMListenDiscoverRequest_PoiInfo, MMListenPreloadArg, BaseRequest, MMListenMusicBaseRequest, MMListenRecommendInfo, MMListenDiscardInfo, MMListenAudioBaseRequest, ClientSessionInfo;

@interface MMListenDiscoverRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) int lineCount;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *discoverLineId;
@property (retain, nonatomic) NSString *discoverId;
@property (nonatomic) int itemCount;
@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSData *syncSessionBuffer;
@property (retain, nonatomic) MMListenDiscoverRequest_PoiInfo *poiInfo;
@property (nonatomic) BOOL noNeedListenItem;
@property (nonatomic) unsigned int audioStyle;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) ClientSessionInfo *clientSessionInfo;
@property (retain, nonatomic) MMListenDiscardInfo *discardInfo;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) MMListenPreloadArg *preloadArg;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;

+ (void)initialize;

@end
