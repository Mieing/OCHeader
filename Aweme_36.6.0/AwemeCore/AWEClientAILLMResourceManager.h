@class NSString, NSMutableDictionary;
@protocol AWEStorageServiceKVInterface;

@interface AWEClientAILLMResourceManager : NSObject <AWEClientAILLMResourceDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) BOOL disableLLM;
@property (copy, nonatomic) NSString *modelsDirString;
@property (retain, nonatomic) NSMutableDictionary *resourceDict;
@property (retain, nonatomic) id<AWEStorageServiceKVInterface> kvStorageHandler;
@property (retain, nonatomic) NSMutableDictionary *backgroundOnlyDownloadRequestDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)resourceWithSceneModel:(id)a0;
- (id)loraResourceWithSceneModel:(id)a0 loraName:(id)a1;
- (void)downloadResourceWithScene:(id)a0 loraName:(id)a1 modelURL:(id)a2 modelPath:(id)a3 config:(id)a4 completion:(id /* block */)a5;
- (void)recordAccessResourceWithScene:(id)a0 loraName:(id)a1;
- (void)deleteResourceWithScene:(id)a0 loraName:(id)a1 modelPath:(id)a2;
- (id)modelPathWithScene:(id)a0 modelURLString:(id)a1 isLoraAdapter:(BOOL)a2;
- (id)pri_resourceWithSceneModel:(id)a0 loraName:(id)a1;
- (id)modelSceneDirPathWithScene:(id)a0;
- (void)p_deleteResourceWithScene:(id)a0 loraName:(id)a1 modelPath:(id)a2;
- (id)loraAdaptersDirPathWithScene:(id)a0;
- (void)p_updateResourceInfoWithBlock:(id /* block */)a0;
- (unsigned long long)pri_doCommonDownloadCompleteActionWithScene:(id)a0 loraAdapterName:(id)a1 error:(id)a2;
- (void)cleanIdleModelsIfNeeded:(BOOL)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)setup;

@end
