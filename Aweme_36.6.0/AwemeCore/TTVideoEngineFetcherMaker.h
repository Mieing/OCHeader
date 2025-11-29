@class NSPointerArray, NSString;

@interface TTVideoEngineFetcherMaker : NSObject <AVMDLiOSFetcherMakerInterface> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSPointerArray *fetcherDelegateList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (id)getMDLFetcherDelegate:(id)a0;
- (id)getFetcher:(id)a0 fileKey:(id)a1 oldURL:(id)a2 engineId:(id)a3;
- (void)storeDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
