@class AWEEcomAISearchResultBasicInfo, AWEEcomAISearchResultEmptyConfig, NSString, AWEEcomAISearchResultLoadMoreConfig;

@interface AWEEcomAISearchResultBizData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEEcomAISearchResultBasicInfo *basicInfo;
@property (retain, nonatomic) AWEEcomAISearchResultEmptyConfig *emptyConfig;
@property (retain, nonatomic) AWEEcomAISearchResultLoadMoreConfig *loadMoreConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicInfoJSONTransformer;
+ (id)emptyConfigJSONTransformer;
+ (id)loadMoreConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
