@class NSMutableArray;

@interface BDTGCertLoader : NSObject {
    BOOL _isLoading;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _loadMutex;
}

@property (retain, nonatomic) NSMutableArray *loadCompletionBlocks;

+ (void)preloadCert;
+ (void)loadCertWithCompletion:(id /* block */)a0;
+ (id)sharedInstance;

- (void)preloadCert;
- (void)loadCertWithCompletion:(id /* block */)a0;
- (void)loadCertFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
