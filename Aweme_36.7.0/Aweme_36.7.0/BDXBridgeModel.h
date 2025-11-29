@class NSDictionary, BDXBridgeContext, NSString;

@interface BDXBridgeModel : MTLModel <MTLJSONSerializing, BDXBridgeModel>

@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) BDXBridgeContext *bridgeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredKeyPaths;
+ (id)bridgeContextJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
