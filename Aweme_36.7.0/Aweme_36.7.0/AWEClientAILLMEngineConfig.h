@class NSDictionary, NSString;

@interface AWEClientAILLMEngineConfig : NSObject <BDModelCustom>

@property (copy, nonatomic) NSDictionary *load_params;
@property (copy, nonatomic) NSDictionary *inference_params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
