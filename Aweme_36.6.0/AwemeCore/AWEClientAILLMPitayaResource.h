@class NSString, NSObject;
@protocol AWEClientAILLMResourceConfig, OS_dispatch_queue;

@interface AWEClientAILLMPitayaResource : AWEClientAILLMAbstractResource {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) id<AWEClientAILLMResourceConfig> config;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *loraName;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL downloading;
@property (nonatomic) BOOL hasBackgroundOnlyDownloadTask;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;

- (BOOL)isModelFileExists;
- (void)recordAccessResource;
- (void)downloadResourceIfNeededWithCompletion:(id /* block */)a0;
- (void)pri_downloadWithIsBackgroundTask:(BOOL)a0;
- (id)makeDownloadErrorWithCode:(long long)a0 desc:(id)a1;
- (void)invokeCompletionAndReport:(id /* block */)a0 result:(unsigned long long)a1 error:(id)a2;
- (id)initWithScene:(id)a0 loraName:(id)a1 config:(id)a2;
- (void)recordAccessLoraAdapter:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (id)modelPath;
- (void)dealloc;
- (id)businessName;

@end
