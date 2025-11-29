@class AWEEcomAISearchResultPageData, AWEEcomAISearchResultBizData;

@interface AWEEcomAISearchResultResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEEcomAISearchResultPageData *pageData;
@property (retain, nonatomic) AWEEcomAISearchResultBizData *bizData;

+ (id)pageDataJSONTransformer;
+ (id)bizDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
