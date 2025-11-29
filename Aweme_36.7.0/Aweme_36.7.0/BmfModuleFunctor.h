@interface BmfModuleFunctor : NSObject

@property (nonatomic) void *p;
@property (nonatomic) BOOL own;

- (id)init:(char *)a0 type:(char *)a1 path:(char *)a2 entry:(char *)a3 option:(id)a4 ninputs:(int)a5 noutputs:(int)a6;
- (id)initFromPtr:(void *)a0 own:(BOOL)a1;
- (void *)ptr;
- (void)dealloc;

@end
