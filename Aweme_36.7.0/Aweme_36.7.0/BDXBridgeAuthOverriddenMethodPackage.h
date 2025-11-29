@class NSSet, NSString;

@interface BDXBridgeAuthOverriddenMethodPackage : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSSet *publicMethods;
@property (readonly, copy, nonatomic) NSSet *protectedMethods;
@property (readonly, copy, nonatomic) NSSet *privateMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publicMethodsJSONTransformer;
+ (id)protectedMethodsJSONTransformer;
+ (id)privateMethodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
