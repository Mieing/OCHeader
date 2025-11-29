@class RTVVoipTrackInfo, NSString, RxScheduler, RTVVoipTrackContext;
@protocol RxInjector;

@interface RTVVoipSessionStore : NSObject <RTVVoipSessionStoreInterface> {
    struct SpinLock { void /* function */ **_vptr$LockingInterface; struct atomic_flag { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } locked; } _spin;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) RTVVoipTrackInfo *trackInfo;
@property (retain, nonatomic) RTVVoipTrackContext *trackContext;
@property (retain, nonatomic) RxScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)sessionTrackInfo;
- (id)sessionTrackContext;
- (void)updateSessionTrackData:(id /* block */)a0;
- (void)resetSessionStore;
- (void)__configureSessionStore;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
