@class AWEEcomSearchResultLoadMoreConfig, NSString, AWEEcomSearchResultSearchMarketingInfo, AWEEcomSearchResultClientAiConfig, AWEEcomSearchResultEmptyConfig, AWEEcomSearchResultExtraInfo, NSDictionary, AWEEcomSearchResultInstantInfo, AWEEcomSearchResultBasicInfo, AWEEcomSearchResultCardConfig, AWEEcomSearchResultJumpToPageConfig;

@interface AWEEcomSearchResultBizData : MTLModel <AWEEcomSearchResultModelAdapterProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEEcomSearchResultBasicInfo *basicInfo;
@property (retain, nonatomic) AWEEcomSearchResultEmptyConfig *emptyConfig;
@property (retain, nonatomic) AWEEcomSearchResultSearchMarketingInfo *searchMarketingInfo;
@property (retain, nonatomic) AWEEcomSearchResultInstantInfo *instantInfo;
@property (retain, nonatomic) AWEEcomSearchResultCardConfig *cardConfig;
@property (retain, nonatomic) AWEEcomSearchResultJumpToPageConfig *jumpToPageConfig;
@property (retain, nonatomic) AWEEcomSearchResultLoadMoreConfig *loadMoreConfig;
@property (retain, nonatomic) AWEEcomSearchResultClientAiConfig *clientAiConfig;
@property (retain, nonatomic) AWEEcomSearchResultExtraInfo *extraInfo;
@property (retain, nonatomic) NSDictionary *sectionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicInfoJSONTransformer;
+ (id)extraInfoJSONTransformer;
+ (id)emptyConfigJSONTransformer;
+ (id)loadMoreConfigJSONTransformer;
+ (id)instantInfoJSONTransformer;
+ (id)searchMarketingInfoJSONTransformer;
+ (id)cardConfigJSONTransformer;
+ (id)jumpToPageConfigJSONTransformer;
+ (id)clientAiConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)fillMerchandiseResp:(id)a0;
- (void).cxx_destruct;

@end
