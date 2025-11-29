@class NSString, EAIModelSchemaIn, EAIModelSchemaOut;

@interface EAIModelSchema : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) EAIModelSchemaIn *schemaIn;
@property (retain, nonatomic) EAIModelSchemaOut *schemaout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
