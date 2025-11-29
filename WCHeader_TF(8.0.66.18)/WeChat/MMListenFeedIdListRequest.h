@class NSData, NSString, BaseRequest, MMListenMusicBaseRequest, MMListenRecommendInfo, NSMutableArray, MMListenDiscardInfo, MMListenAudioBaseRequest, MMListenFeedIdListRequest_LoadItemRequest;

@interface MMListenFeedIdListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) int count;
@property (retain, nonatomic) NSMutableArray *topListenIds;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;
@property (nonatomic) BOOL loadItem;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) int listOrderType;
@property (nonatomic) BOOL loadSimplePlayableInfo;
@property (retain, nonatomic) NSMutableArray *topListenCtx;
@property (retain, nonatomic) MMListenFeedIdListRequest_LoadItemRequest *loadItemRequest;
@property (retain, nonatomic) NSMutableArray *filterListenCtx;
@property (retain, nonatomic) NSString *mpAlbumId;
@property (nonatomic) int idlistOrder;
@property (nonatomic) unsigned int loadListScene;
@property (retain, nonatomic) MMListenDiscardInfo *discardInfo;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;

+ (void)initialize;

@end
