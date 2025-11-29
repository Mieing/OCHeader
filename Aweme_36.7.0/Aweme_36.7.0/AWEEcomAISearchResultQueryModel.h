@class NSString, AWEEcomAISearchResultInquiredProductInfo, NSDictionary;

@interface AWEEcomAISearchResultQueryModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) AWEEcomAISearchResultInquiredProductInfo *productInfo;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
