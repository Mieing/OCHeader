@class NSNumber, NSString, NSSet;

@interface BDXBridgeAuthPatternRule : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) BOOL isCompatible;
@property (readonly, copy, nonatomic) NSNumber *appID;
@property (readonly, copy, nonatomic) NSString *pattern;
@property (readonly, nonatomic) long long group;
@property (readonly, copy, nonatomic) NSSet *includedMethods;
@property (readonly, copy, nonatomic) NSSet *excludedMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupJSONTransformer;
+ (id)includedMethodsJSONTransformer;
+ (id)excludedMethodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
