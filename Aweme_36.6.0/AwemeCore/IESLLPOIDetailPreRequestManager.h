@class NSArray, LLBizDitoViewController, IESLLGoodsDetailPageContext, NSDictionary, NSMutableDictionary;
@protocol IESLLPOIDetailPreRequestManagerDataSource;

@interface IESLLPOIDetailPreRequestManager : NSObject

@property (retain, nonatomic) NSArray *preRequestArray;
@property (weak, nonatomic) IESLLGoodsDetailPageContext *context;
@property (weak, nonatomic) LLBizDitoViewController<IESLLPOIDetailPreRequestManagerDataSource> *viewController;
@property (weak, nonatomic) NSDictionary *baseRouterParams;
@property (retain, nonatomic) NSMutableDictionary *preRequestDictionary;
@property (retain, nonatomic) NSDictionary *cjInfo;
@property (nonatomic) BOOL hasConsumeCacheResponseData;
@property (retain, nonatomic) NSDictionary *cacheResponseData;

- (id)initWithContext:(id)a0 viewController:(id)a1 baseRouterParams:(id)a2 schemeUrls:(id)a3;
- (void)mergeWithResponseDictionary:(id)a0;
- (void)ditoExtension:(id)a0 didReceiveSizeChangeWithViewTag:(id)a1;
- (void)gdContainerWillRefresh;
- (void)updatePreRequestPageModel:(id)a0;
- (id)getCJSharkInfo;
- (void)doSettingsItemRequest:(id)a0;
- (BOOL)shouldRequestWithConfig:(id)a0;
- (id)generateRequestParamsWithConfig:(id)a0;
- (id)generateDictionaryWithCommonQuery:(id)a0 blackList:(id)a1;
- (void)beginPreRequest;
- (id)getBundleWithUrlString:(id)a0;
- (void)cacheCJInfoIfNeed;
- (void)handleCacheData:(id)a0 cacheData:(id)a1;
- (id)getGdRequestParamsWithBlackList:(id)a0;
- (void)handlePreModelWhenUseCacheData:(id)a0;
- (id)filterGoodsDetailCJParams:(id)a0;
- (void)didReceiveNetworkResponse:(id)a0 forBundle:(id)a1 error:(id)a2 requestUrl:(id)a3 requestParams:(id)a4 requestTracker:(id)a5;
- (BOOL)handleCacheDataIfNeed:(id)a0;
- (id)generateDictionaryWithSchemaQuery:(id)a0;
- (BOOL)packageIsValidWithChannel:(id)a0 geockId:(id)a1;
- (id)getCJSharkInfoByManager;
- (id)initWithContext:(id)a0 viewController:(id)a1 baseRouterParams:(id)a2;
- (void).cxx_destruct;

@end
