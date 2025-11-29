@class MMListenRecommendInfo, BaseRequest, NSString, MMListenIdListRequest_LoadItemRequest;

@interface MMListenIdListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) int reqType;
@property (retain, nonatomic) NSString *mpAlbumId;
@property (nonatomic) int listOrder;
@property (nonatomic) BOOL loadItem;
@property (retain, nonatomic) MMListenIdListRequest_LoadItemRequest *loadItemRequest;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;
@property (nonatomic) unsigned int loadListScene;

+ (void)initialize;

@end
