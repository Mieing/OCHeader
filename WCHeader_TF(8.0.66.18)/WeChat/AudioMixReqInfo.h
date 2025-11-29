@class MMListenRecommendInfo, NSString, NSData, MMListenDiscardInfo, NSMutableArray, MMListenDiscoverLine;

@interface AudioMixReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) int reqAction;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;
@property (retain, nonatomic) NSMutableArray *topListenCtx;
@property (retain, nonatomic) MMListenDiscardInfo *discardInfo;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) NSData *syncSessionBuffer;
@property (nonatomic) int preloadMarkReason;
@property (nonatomic) int requestScene;
@property (retain, nonatomic) MMListenDiscoverLine *line;
@property (nonatomic) int tabIndex;
@property (nonatomic) BOOL needRequestDirectly;
@property (nonatomic) BOOL needCheckRepeated;
@property (nonatomic) BOOL needLoadMore;

+ (void)initialize;

@end
