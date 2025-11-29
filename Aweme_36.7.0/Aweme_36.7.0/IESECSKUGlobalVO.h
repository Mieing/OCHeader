@class NSDictionary, NSString, IESECSKUSpecsNodeSpecItemState;

@interface IESECSKUGlobalVO : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *skuInfoMap;
@property (retain, nonatomic) IESECSKUSpecsNodeSpecItemState *defaultSpecItemState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)skuInfoMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
