@class NSString, NSMutableArray, NSLock;

@interface AVMDLiOSDNSParserBridge : NSObject

@property (retain, nonatomic) NSMutableArray *parserActions;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) struct AVMDLDNSParserImplement { void /* function */ **x0; int x1; void /* function */ **x2; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x3; BOOL x4; int x5; void *x6; char *x7; char *x8; struct AVMDLNetWorkManager *x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; long long x11; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x12; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x13; int x14; } *implement;
@property (nonatomic) long long startT;
@property (retain, nonatomic) NSLock *lock;

- (int)startParse:(const char *)a0 implement:(struct AVMDLDNSParserImplement { void /* function */ **x0; int x1; void /* function */ **x2; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x3; BOOL x4; int x5; void *x6; char *x7; char *x8; struct AVMDLNetWorkManager *x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; long long x11; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x12; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x13; int x14; } *)a1;
- (int)switchTypeToInternal:(long long)a0;
- (id)getIpList:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
