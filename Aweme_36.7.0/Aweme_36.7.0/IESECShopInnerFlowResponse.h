@class NSArray, NSString, NSDictionary;

@interface IESECShopInnerFlowResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *cardModels;
@property (copy, nonatomic) NSString *paginationParams;
@property (copy, nonatomic) NSDictionary *sliceConfig;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
