@class NSString;

@interface BDXBridgeAuthModelV2PublicKey : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rsa;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
