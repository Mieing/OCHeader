@class NSString, NSLock;
@protocol AVMDLiOSURLFetcherInterface;

@interface AVMDLiOSURLFetcherBridgeV2 : NSObject

@property (copy, nonatomic) NSString *rawKey;
@property (copy, nonatomic) NSString *fileKey;
@property (copy, nonatomic) NSString *oldURL;
@property (copy, nonatomic) NSString *fetchURLResult;
@property (nonatomic) unsigned char isFinish;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) struct MDLURLFetcher { void /* function */ **x0; struct MDLURLFetcherImp *x1; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x2; BOOL x3; int x4; char *x5; char *x6; char *x7; char *x8; long long x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; } *fetcherImplement;
@property (retain, nonatomic) id<AVMDLiOSURLFetcherInterface> fetcherInterface;

- (int)start:(id)a0 fileKey:(id)a1 oldURL:(id)a2 engineId:(id)a3 implement:(struct MDLURLFetcher { void /* function */ **x0; struct MDLURLFetcherImp *x1; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x2; BOOL x3; int x4; char *x5; char *x6; char *x7; char *x8; long long x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; } *)a4;
- (void)remvSource;
- (void)onCompletion:(long long)a0 rawkey:(id)a1 fileKey:(id)a2 newURLs:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
