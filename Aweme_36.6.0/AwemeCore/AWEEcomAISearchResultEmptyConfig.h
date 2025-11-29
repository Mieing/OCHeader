@class NSString, AWEEcomAISearchResultNoResultModel;

@interface AWEEcomAISearchResultEmptyConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEEcomAISearchResultNoResultModel *noResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noResultJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
