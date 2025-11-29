@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLivePBUniformManager : NSObject {
    NSMutableDictionary *_configMap;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSMutableDictionary *_classSetupTokens;
}

+ (id)shareInstance;

- (void)setupUniformForClass:(Class)a0 work:(id /* block */)a1;
- (id)getUniformConfigFromPBName:(id)a0;
- (void)setupPBUniformMap;
- (id)configPathWithRoot:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
