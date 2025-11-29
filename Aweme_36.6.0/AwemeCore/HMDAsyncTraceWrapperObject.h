@interface HMDAsyncTraceWrapperObject : NSObject

@property (nonatomic) SEL sel;
@property (retain, nonatomic) id arg;
@property (nonatomic) struct { struct _opaque_pthread_t *x0; unsigned int x1; struct _opaque_pthread_t *x2; unsigned int x3; char x4[128]; char x5[128]; void *x6[150]; int x7; int x8; BOOL x9; int x10; int x11; } *record;

- (void).cxx_destruct;

@end
