@interface AweQuaterbackSDK : NSObject

+ (id)configuration:(id)a0;
+ (void)loadLazyModuleWithName:(id)a0;
+ (void)startWithConfiguration:(id)a0 logConf:(id)a1 delegate:(id)a2;
+ (void)fetchQuaterbacks;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
+ (void)loadQuaterbackWithInfo:(id)a0 error:(id *)a1;
+ (void)clearAllLocalQuaterback;

@end
