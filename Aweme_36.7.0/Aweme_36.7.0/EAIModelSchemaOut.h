@class NSString;

@interface EAIModelSchemaOut : MTLModel <MTLJSONSerializing>

@property (nonatomic) int index;
@property (copy, nonatomic) NSString *valueType;
@property (nonatomic) int valueSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
