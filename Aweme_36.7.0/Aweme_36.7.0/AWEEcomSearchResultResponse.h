@class NSString, AWEEcomSearchResultBizData, AWEEcomSearchResultPageData, NSDictionary;

@interface AWEEcomSearchResultResponse : AWEBaseApiModel <AWEEcomSearchResultModelAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEEcomSearchResultPageData *pageData;
@property (retain, nonatomic) AWEEcomSearchResultBizData *bizData;
@property (copy, nonatomic) NSDictionary *rawLogPassback;

+ (id)pageDataJSONTransformer;
+ (id)bizDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)fillMerchandiseResp:(id)a0;
- (void).cxx_destruct;

@end
