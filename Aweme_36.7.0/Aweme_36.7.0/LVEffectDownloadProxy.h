@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface LVEffectDownloadProxy : NSObject {
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *delegates;

- (BOOL)validateEffectWithDataSource:(id)a0 filePath:(id)a1;
- (void)fetchEffectListWithEffectIDListRequests:(id)a0 completion:(id /* block */)a1;
- (id)safeDelegateForPlatform:(long long)a0;
- (void)downloadEffectWithDataSource:(id)a0 completion:(id /* block */)a1;
- (void)downloadEffectWithDataSource:(id)a0 retryCount:(long long)a1 validator:(id)a2 completion:(id /* block */)a3;
- (id)effectPathForEffectDataSource:(id)a0;
- (void)registerDelegate:(id)a0 forPlatform:(long long)a1;
- (void)unregisterDelegateForPlatform:(long long)a0;
- (void)fetchEffectListWithResourceIDListRequests:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
