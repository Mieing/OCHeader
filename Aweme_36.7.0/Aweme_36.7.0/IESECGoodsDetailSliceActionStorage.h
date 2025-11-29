@class NSDictionary, NSString;

@interface IESECGoodsDetailSliceActionStorage : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
