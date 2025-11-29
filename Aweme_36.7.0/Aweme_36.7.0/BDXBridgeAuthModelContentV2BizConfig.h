@class NSArray, BDXBridgeAuthModelContentV2PublicKey, NSSet, NSDictionary, NSNumber, NSString;

@interface BDXBridgeAuthModelContentV2BizConfig : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSArray *safeURLs;
@property (readonly, nonatomic) BDXBridgeAuthModelContentV2PublicKey *publicKey;
@property (readonly, nonatomic) long long group;
@property (readonly, copy, nonatomic) NSSet *includedMethods;
@property (readonly, copy, nonatomic) NSSet *excludedMethods;
@property (readonly, copy, nonatomic) NSDictionary *methodCallLimitDictionary;
@property (readonly, copy, nonatomic) NSNumber *feAuthVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupJSONTransformer;
+ (id)includedMethodsJSONTransformer;
+ (id)excludedMethodsJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)safeURLsJSONTransformer;
+ (id)publicKeyJSONTransformer;
+ (id)methodCallLimitDictionaryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
