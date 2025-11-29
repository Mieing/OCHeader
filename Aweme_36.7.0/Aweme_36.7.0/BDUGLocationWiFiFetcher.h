@class NSMutableArray;

@interface BDUGLocationWiFiFetcher : NSObject {
    BOOL _isWiFiFetching;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _isWifiFetchingMutex;
}

@property (retain, nonatomic) NSMutableArray *completionList;

+ (id)sharedFetcher;

- (void)getWifiInfoWithCert:(id)a0 completionHandler:(id /* block */)a1;
- (id)getWifiInfoWithCert:(id)a0 error:(id *)a1;
- (void)fetchCurrentWifiWithCompletionHandler:(id /* block */)a0 cert:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
