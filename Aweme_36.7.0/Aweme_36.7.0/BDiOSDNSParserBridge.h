@class NSString, NSLock;

@interface BDiOSDNSParserBridge : NSObject

@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) struct BDDNSParserImplement { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; BOOL x2; int x3; void *x4; char *x5; char *x6; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x7; long long x8; } *implement;
@property (nonatomic) long long startT;
@property (retain, nonatomic) NSLock *lock;

- (int)startParse:(const char *)a0 implement:(struct BDDNSParserImplement { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; BOOL x2; int x3; void *x4; char *x5; char *x6; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x7; long long x8; } *)a1;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
