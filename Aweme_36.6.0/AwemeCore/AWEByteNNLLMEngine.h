@class NSRecursiveLock, NSLock, NSMutableDictionary, AWEByteNNLLMConfig, NSObject;
@protocol OS_dispatch_queue;

@interface AWEByteNNLLMEngine : NSObject {
    struct shared_ptr<BYTENNLLM::ByteNNLLMEngine> { struct ByteNNLLMEngine *__ptr_; struct __shared_weak_count *__cntrl_; } engine;
}

@property (retain, nonatomic) AWEByteNNLLMConfig *config;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isGenerating;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSLock *loraLock;
@property (retain, nonatomic) NSMutableDictionary *applyingLoraAdapterDict;
@property (copy, nonatomic) id /* block */ onLogBlock;
@property (nonatomic) BOOL enable_stream_output;
@property (nonatomic) BOOL isEngineLoaded;

+ (id)sdkVersion;

- (id)pri_createEngine;
- (void)pri_generateForwardWithPrompt:(id)a0 generateParams:(id)a1 tokenCallback:(id /* block */)a2 callback:(id /* block */)a3;
- (void)pri_forwardWithPrompt:(id)a0 generateParams:(id)a1 tokenCallback:(id /* block */)a2 callback:(id /* block */)a3 handler:(id /* block */)a4;
- (id)profilingWithEngine:(struct shared_ptr<BYTENNLLM::ByteNNLLMEngine> { struct ByteNNLLMEngine *x0; struct __shared_weak_count *x1; })a0;
- (void)pri_chatWithPrompt:(id)a0 generateParams:(id)a1 tokenCallback:(id /* block */)a2 callback:(id /* block */)a3;
- (void)pri_unloadModel;
- (void)createEngineWithCallback:(id /* block */)a0;
- (void)generateForwardWithPrompt:(id)a0 generateParams:(id)a1 tokenCallback:(id /* block */)a2 callback:(id /* block */)a3;
- (void)chatWithPrompt:(id)a0 generateParams:(id)a1 tokenCallback:(id /* block */)a2 callback:(id /* block */)a3;
- (void)unloadModelWithCallback:(id /* block */)a0;
- (void)resetEngineWithCallback:(id /* block */)a0;
- (void)stopGenerateWithCallback:(id /* block */)a0;
- (void)applyLoraAdapterIfNeededWithAdapterInfo:(id)a0 callback:(id /* block */)a1;
- (void)removeLoraAdapterWithName:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
