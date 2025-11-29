@class MMListenRecommendInfo, BaseRequest, MMListenMusicInfo, NSString, MMListenItem, NSMutableArray;

@interface MMListenItemRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *listenIds;
@property (nonatomic) int reqType;
@property (retain, nonatomic) MMListenMusicInfo *musicCtx;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *ctxCategoryId;
@property (nonatomic) int reqScene;
@property (retain, nonatomic) MMListenItem *listenCtx;
@property (retain, nonatomic) MMListenRecommendInfo *ctxCategoryRecommendInfo;
@property (nonatomic) BOOL isPreload;

+ (void)initialize;

@end
