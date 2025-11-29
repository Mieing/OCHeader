@class IESSCMetalLibrary, NSMutableDictionary, NSObject;
@protocol MTLDevice, OS_dispatch_semaphore;

@interface IESSCMetalPipeline : NSObject

@property (retain, nonatomic) IESSCMetalLibrary *library;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) NSMutableDictionary *pipelineCache;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;

- (id)generatePipelineStateWithVertexFunctionName:(id)a0 fragmentFunctionName:(id)a1 blendEnable:(BOOL)a2 error:(id *)a3;
- (id)pipelineCacheKeyWithVertexName:(id)a0 fragmentName:(id)a1 blendEnable:(BOOL)a2;
- (id)generatePipelineStateWithVertexFunction:(id)a0 fragmentFunction:(id)a1 blendEnable:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)functionWithName:(id)a0;
- (id)initWithLibrary:(id)a0 device:(id)a1;

@end
