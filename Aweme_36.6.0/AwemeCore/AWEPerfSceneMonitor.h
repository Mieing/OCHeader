@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEPerfSceneMonitor : NSObject

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSMutableDictionary *sceneMap;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) NSMutableArray *observers;

+ (id)sharedMonitor;

- (id)subScene;
- (void)updateScene:(id)a0 subScene:(id)a1;
- (void)onSceneDidChange;
- (void)setSubSceneCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)dealloc;

@end
