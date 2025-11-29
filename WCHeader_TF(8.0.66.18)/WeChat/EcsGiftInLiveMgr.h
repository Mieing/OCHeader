@class NSString, NSMutableDictionary, EcsGiftInLiveMonitor;

@interface EcsGiftInLiveMgr : MMUserService <MMServiceProtocol> {
    struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__cxx_atomic_base_impl<long long>> { _Atomic long long __a_value; } __a_; } _seq;
}

@property (retain, nonatomic) NSMutableDictionary *callbacks;
@property (retain, nonatomic) EcsGiftInLiveMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)resendGiftFromViewController:(id)a0 liveId:(unsigned long long)a1 finderUsername:(id)a2 giftItem:(id)a3 completion:(id /* block */)a4;
- (long long)incrementSeqAndGet;
- (void)setCallback:(id /* block */)a0 forKey:(id)a1;
- (id /* block */)getCallbackForKey:(id)a0;
- (void)clearCallbacks;
- (void)onGiftResendCompletedResult:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
