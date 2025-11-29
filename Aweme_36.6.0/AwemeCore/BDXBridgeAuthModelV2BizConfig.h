@class NSArray, NSString, NSDictionary, NSNumber, BDXBridgeAuthModelV2PublicKey;

@interface BDXBridgeAuthModelV2BizConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *safeURLs;
@property (retain, nonatomic) BDXBridgeAuthModelV2PublicKey *publicKey;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSArray *includedMethods;
@property (copy, nonatomic) NSArray *excludedMethods;
@property (copy, nonatomic) NSDictionary *methodCallLimitDictionary;
@property (copy, nonatomic) NSNumber *feAuthVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publicKeyJSONTransformer;
+ (id)methodCallLimitDictionaryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)groupAuthType;
- (void).cxx_destruct;

@end
