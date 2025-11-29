@class NSMutableDictionary;

@interface LynxEnginePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedEngines;

+ (id)sharedInstance;

- (void)registerReuseEngine:(id)a0;
- (id)getEngineQueueWithBundle:(id)a0;
- (id)pollEngineWithRender:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
