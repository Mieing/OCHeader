@class FlutterEngine, NSString, EngineGroupMemReporter, NSMutableDictionary, NSObject, UIViewController;
@protocol OS_dispatch_queue;

@interface MMFlutterEngine : NSObject {
    NSString *_key;
    FlutterEngine *_engine;
    UIViewController *_viewController;
    NSMutableDictionary *_plugins;
    BOOL _isInvokePreloadEnd;
}

@property (nonatomic) long long snapshotCost;
@property (nonatomic) BOOL snapshotTimeout;
@property (nonatomic) BOOL hasRequestPrerender;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) FlutterEngine *engine;
@property (nonatomic) long long createStart;
@property (nonatomic) long long createEnd;
@property (copy, nonatomic) id /* block */ destroyCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *destroyQueue;
@property (retain, nonatomic) NSString *pluginRoute;
@property (retain, nonatomic) EngineGroupMemReporter *memReporter;

+ (id)flutterRevision;

- (id)initWithKey:(id)a0 engine:(id)a1;
- (void)destroyEngine:(BOOL)a0;
- (void)destroyEngine:(BOOL)a0 isRootEngine:(BOOL)a1;
- (void)addPlugins:(id)a0;
- (id)findPlugin:(Class)a0;
- (void)setViewController:(id)a0;
- (void)requestPreRender:(id /* block */)a0 timeOutInMs:(long long)a1;
- (void)pluginsDetachedFromEngine;
- (void).cxx_destruct;

@end
