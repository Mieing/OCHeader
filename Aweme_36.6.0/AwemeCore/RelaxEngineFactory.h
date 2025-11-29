@interface RelaxEngineFactory : NSObject

+ (id)sharedInstance;

- (id)createWorker:(BOOL)a0;
- (void)createRuntimeAsyncWithCallback:(id /* block */)a0;
- (id)createEngine;

@end
