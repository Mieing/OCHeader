@class NSMutableDictionary;

@interface BDPolicyPipelineManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *pipelines;

+ (id)sharedInstance;

- (void)registerPipeline:(id)a0 forSpace:(id)a1;
- (void)registerPipeline:(id)a0 forPipelineUid:(id)a1;
- (void)removePipelineforPipelineUid:(id)a0;
- (id)getPipelineWithUid:(id)a0;
- (void)removePipelineforSpace:(id)a0;
- (void)removeAllPipelines;
- (id)getPipelineForCertUnit:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
