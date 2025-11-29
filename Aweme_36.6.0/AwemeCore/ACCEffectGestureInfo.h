@class NSDictionary, NSString;

@interface ACCEffectGestureInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long priority;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;

@end
