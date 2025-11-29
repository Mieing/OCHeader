@class AWEClientAILLMResourceConfig, AWEClientAILLMEngineConfig, NSDictionary, NSString;

@interface AWEClientAILLMSceneConfig : NSObject <BDModelCustom>

@property (retain, nonatomic) AWEClientAILLMResourceConfig *resource_config;
@property (retain, nonatomic) AWEClientAILLMEngineConfig *engine_config;
@property (retain, nonatomic) NSDictionary *adapters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;
- (id)init;
- (void)mergeWithDictionary:(id)a0;

@end
