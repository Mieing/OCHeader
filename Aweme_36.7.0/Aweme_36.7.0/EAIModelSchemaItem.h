@class NSString;

@interface EAIModelSchemaItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *valueType;
@property (nonatomic) int valueSource;
@property (nonatomic) BOOL required;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
