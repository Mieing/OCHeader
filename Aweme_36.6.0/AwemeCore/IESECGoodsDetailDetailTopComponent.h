@class NSArray, NSString;

@interface IESECGoodsDetailDetailTopComponent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
