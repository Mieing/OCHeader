@class NSMethodSignature;

@interface LvLocalData : NSObject

@property (retain, nonatomic) NSMethodSignature *dataName;
@property (nonatomic) Class class;
@property (nonatomic) SEL selector;

+ (id)genDataWithName:(const char *)a0 class:(Class)a1;

- (BOOL)sendEvent:(struct LiteVMContext { int x0; struct _opaque_pthread_t *x1; struct CacheItem *x2; unsigned long long x3; void *x4; void *x5; unsigned int x6; struct Registers { unsigned long long x0[32]; } x7; } *)a0 Target:(id)a1 parameter:(int)a2 result:(void *)a3;
- (BOOL)sendEventEx:(struct LiteVM { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; } *)a0 Target:(id)a1 parameter:(char *)a2 result:(void *)a3;
- (void)dealloc;

@end
