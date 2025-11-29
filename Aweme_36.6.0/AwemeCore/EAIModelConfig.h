@class NSString, EAIModelSchema, EAIModelFileUrl;

@interface EAIModelConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) EAIModelFileUrl *fileUrl;
@property (nonatomic) int status;
@property (nonatomic) int type;
@property (retain, nonatomic) EAIModelSchema *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
