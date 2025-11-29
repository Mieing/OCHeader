@class NSString, NSLock;
@protocol AVMDLiOSURLFetcherInterface;

@interface AVMDLiOSURLFetcherBridge : NSObject <AVMDLiOSURLFetcherListener>

@property (copy, nonatomic) NSString *rawKey;
@property (copy, nonatomic) NSString *fileKey;
@property (copy, nonatomic) NSString *oldURL;
@property (copy, nonatomic) NSString *fetchURLResult;
@property (nonatomic) unsigned char isFinish;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) struct AVMDLURLFetcherImplement { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; BOOL x2; int x3; char *x4; char *x5; char *x6; char *x7; void *x8; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x9; int x10; } *fetcherImplement;
@property (retain, nonatomic) id<AVMDLiOSURLFetcherInterface> fetcherInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getFetcherMaker;
+ (void)setFetcherMaker:(id)a0;

- (int)start:(id)a0 fileKey:(id)a1 oldURL:(id)a2 engineId:(id)a3 implement:(struct AVMDLURLFetcherImplement { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; BOOL x2; int x3; char *x4; char *x5; char *x6; char *x7; void *x8; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x9; int x10; } *)a4;
- (void)remvSource;
- (void)onCompletion:(long long)a0 rawkey:(id)a1 fileKey:(id)a2 newURLs:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
