@interface TriggerPreProcessorMethodWrapper : NSObject

+ (void)executeWithModel:(id)a0 completionHandler:(id /* block */)a1;
+ (void)execute:(id)a0 completionHandler:(id /* block */)a1;
+ (void)trackPreprocessorJSBMonitorWithPath:(id)a0 isPreloadGecko:(BOOL)a1 isNaPrefetch:(BOOL)a2 isSuccess:(BOOL)a3;

@end
