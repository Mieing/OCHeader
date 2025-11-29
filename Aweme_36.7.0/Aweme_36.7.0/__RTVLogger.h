@class NSString;
@protocol RxInjector;

@interface __RTVLogger : NSObject <RTVLoggerInterface> {
    struct SpinLock { void /* function */ **_vptr$LockingInterface; struct atomic_flag { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } locked; } _spin;
}

@property (copy, nonatomic) NSString *moduleTag;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (void)infoTags:(id)a0 file:(const char *)a1 line:(int)a2 contents:(id)a3;
- (void)errorTags:(id)a0 file:(const char *)a1 line:(int)a2 contents:(id)a3;
- (id)initWithModuleTag:(id)a0;
- (void)__addContents:(id)a0 tags:(id)a1 file:(const char *)a2 line:(int)a3 logLevel:(unsigned long long)a4;
- (void)warningTags:(id)a0 file:(const char *)a1 line:(int)a2 contents:(id)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
