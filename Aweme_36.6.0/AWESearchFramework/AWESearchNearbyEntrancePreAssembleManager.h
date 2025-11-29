@class NSString, AWESearchSchemaModel, AWESearchPreNetworkRequest, AWESearchMiddleGSRequstContext;

@interface AWESearchNearbyEntrancePreAssembleManager : NSObject

@property (copy, nonatomic) NSString *middlePagePreRequestSchema;
@property (copy, nonatomic) NSString *middlePageRouterSchema;
@property (copy, nonatomic) NSString *resultPagePreRequestSchema;
@property (retain, nonatomic) AWESearchMiddleGSRequstContext *gsRequestContext;
@property (retain, nonatomic) AWESearchSchemaModel *routerModel;
@property (retain, nonatomic) AWESearchPreNetworkRequest *preNetworkRequest;
@property (copy, nonatomic) NSString *preRequestTag;

+ (id)sharedInstance;

- (id)prefetchID;
- (id)lifeServiceCachedRouterModel;
- (void)preHandleForGSRequestContext;
- (void)preHandleForRouterModel;
- (void)preHandleForPreRequest;
- (BOOL)enablePreGenerateGSRequestContext;
- (BOOL)enablePreGenerateRouterModel;
- (BOOL)enablePreGenerateResultPreNetworkRequest;
- (id)lifeServiceGSRequestContext;
- (id)lifeServiceResultPreNetworkRequest;
- (id)lifeServiceResultPreRequestTag;
- (void)setPreHandledInfoWithConfig:(id)a0;
- (BOOL)enablePreAssemble;
- (void).cxx_destruct;
- (void)clearAll;

@end
