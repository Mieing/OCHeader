@class NSString, NSDictionary;

@interface IESECRecommendItemRawAdOpenUrlParams : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *kolId;
@property (copy, nonatomic) NSString *creativeId;
@property (nonatomic) BOOL isLuban;
@property (copy, nonatomic) NSDictionary *metaParams;
@property (copy, nonatomic) NSDictionary *adRequestAdditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
