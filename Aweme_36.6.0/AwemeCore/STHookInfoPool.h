@class NSString, NSMethodSignature, NSMutableArray, NSObject;
@protocol STHookInfo, OS_dispatch_semaphore;

@interface STHookInfoPool : NSObject <STHookInfoPool> {
    struct { int abi; unsigned int nargs; struct _ffi_type **arg_types; struct _ffi_type *rtype; unsigned int bytes; unsigned int flags; unsigned int aarch64_nfixedargs; } _cif;
    struct { int abi; unsigned int nargs; struct _ffi_type **arg_types; struct _ffi_type *rtype; unsigned int bytes; unsigned int flags; unsigned int aarch64_nfixedargs; } _blockCif;
    struct _ffi_type **_args;
    struct _ffi_type **_blockArgs;
    struct { void *x0; void *x1; struct *x2; void /* function */ *x3; void *x4; } *_closure;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSMethodSignature *signature;
@property (nonatomic) unsigned long long argsCount;
@property (nonatomic) SEL uniqueKey;
@property (readonly, nonatomic) NSMutableArray *beforeInfos;
@property (readonly, nonatomic) id<STHookInfo> insteadInfo;
@property (readonly, nonatomic) NSMutableArray *afterInfos;
@property (copy, nonatomic) NSString *typeEncoding;
@property (nonatomic) void /* function */ *originalIMP;
@property (nonatomic) SEL sel;
@property (nonatomic) void *stingerIMP;
@property (weak, nonatomic) Class hookedCls;
@property (weak, nonatomic) Class statedCls;
@property (nonatomic) BOOL isInstanceHook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)poolWithTypeEncoding:(id)a0 originalIMP:(void /* function */ *)a1 selector:(SEL)a2;

- (void)_genarateBlockCif;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)addInfo:(id)a0;
- (BOOL)removeInfo:(id)a0;

@end
