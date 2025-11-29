@class NSMutableDictionary;

@interface AWEClientAILLMConfigManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *sceneConfigDict;

+ (id)sharedInstance;

- (id)configForSceneModel:(id)a0;
- (BOOL)shouldEnableLoraFunction;
- (void).cxx_destruct;
- (id)init;

@end
