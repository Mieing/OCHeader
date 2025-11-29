@class NSArray, NSDictionary, NSString;

@interface IESECSKUSpecsNodeFields : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *specs;
@property (retain, nonatomic) NSDictionary *specsState;
@property (retain, nonatomic) NSDictionary *specItemsState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specsJSONTransformer;
+ (id)keyToObjectJSONTransformerWithClass:(Class)a0;
+ (id)specsStateJSONTransformer;
+ (id)specItemsStateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
