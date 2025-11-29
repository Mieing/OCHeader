@class NSMutableDictionary;

@interface RTVXREngineAudioContextContainer : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *nodesMap;
@property (nonatomic) unsigned long long contentCreateIndex;

+ (id)shareInstance;

- (id)createNodeWithContext:(id)a0;
- (unsigned long long)getNextCreateIndex;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
