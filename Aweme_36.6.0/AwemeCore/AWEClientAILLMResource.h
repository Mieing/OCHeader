@class NSString, NSObject;
@protocol AWEClientAILLMResourceConfig, OS_dispatch_queue;

@interface AWEClientAILLMResource : AWEClientAILLMAbstractResource {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) BOOL downloading;
@property (copy, nonatomic) NSString *modelPath;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *loraName;
@property (retain, nonatomic) id<AWEClientAILLMResourceConfig> config;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;

- (BOOL)isModelFileExists;
- (void)recordAccessResource;
- (void)downloadResourceIfNeededWithCompletion:(id /* block */)a0;
- (id)makeDownloadErrorWithCode:(long long)a0 desc:(id)a1;
- (void)invokeCompletionAndReport:(id /* block */)a0 result:(unsigned long long)a1 error:(id)a2;
- (id)initWithScene:(id)a0 loraName:(id)a1 modelPath:(id)a2 config:(id)a3;
- (void).cxx_destruct;
- (void)deleteResource;
- (void)dealloc;

@end
