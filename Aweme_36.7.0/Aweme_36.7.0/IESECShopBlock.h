@class NSString, NSDictionary, NSArray;

@interface IESECShopBlock : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *blockCode;
@property (copy, nonatomic) NSDictionary *globalData;
@property (copy, nonatomic) NSArray *moduleList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
