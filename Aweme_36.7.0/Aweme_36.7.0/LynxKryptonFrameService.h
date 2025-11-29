@class NSString;

@interface LynxKryptonFrameService : NSObject <KryptonFrameService> {
    struct shared_ptr<lynx::runtime::IVSyncObserver> { struct IVSyncObserver *__ptr_; struct __shared_weak_count *__cntrl_; } observer_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestVSync:(id /* block */)a0;
- (void)registerBeforeVSyncEndListener:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithObserver:(struct shared_ptr<lynx::runtime::IVSyncObserver> { struct IVSyncObserver *x0; struct __shared_weak_count *x1; })a0;
- (void)setPreferredFramesPerSecond:(long long)a0;

@end
