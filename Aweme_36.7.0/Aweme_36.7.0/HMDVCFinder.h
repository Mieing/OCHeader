@class NSString, NSArray;

@interface HMDVCFinder : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mtx;
}

@property (class, readonly) HMDVCFinder *finder;

@property (retain) NSString *scene;
@property (nonatomic) BOOL multiScenesSupport;
@property (retain) NSArray *multiScenes;
@property (readonly) NSString *previousScene;
@property (readonly) NSString *sceneWithUpdate;
@property (readonly) void *scene_vc_unsafe;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)dealloc;
- (void)triggerUpdateImmediately;
- (void)mainThreadUpdate;
- (void *)scene_vc_unsafe;
- (id)sceneWithUpdate;
- (void)setCustomChildVCAlgorithm:(id /* block */)a0;
- (id /* block */)customChildVCAlgorithm;
- (id)defaultChildVCAlgorithm:(id)a0 parentViewController:(id)a1;
- (void)setCustomChildVCAlgroithm:(id /* block */)a0;
- (id /* block */)customChildVCAlgroithm;
- (id)initWithDefault;
- (void).cxx_destruct;
- (id)init;
- (void)triggerUpdate;

@end
