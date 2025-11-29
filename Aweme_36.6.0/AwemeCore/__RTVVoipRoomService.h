@class NSMutableDictionary, NSString, RxMultipleDelegate, NSMutableSet;
@protocol RTVVoipManagerInterface, RxInjector, RTVVoipRoomObserver;

@interface __RTVVoipRoomService : NSObject <RTVVoipRoomService> {
    struct SpinLock { void /* function */ **_vptr$LockingInterface; struct atomic_flag { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } locked; } _spin;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) RxMultipleDelegate<RTVVoipRoomObserver> *multipleObserver;
@property (retain, nonatomic) NSMutableSet *observedRoomIDs;
@property (readonly, nonatomic) NSMutableDictionary *observedRoomInfoMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)checkVoipRoomAliveWithID:(id)a0;
- (void)observeRoomWithRoomID:(id)a0;
- (void)unObserveRoomWithRoomID:(id)a0;
- (void)didReceivePushRoomInfo:(id)a0;
- (id)observedRoomInfoWithRoomID:(id)a0;
- (void)__notifyObserverRoomInfoDidChange:(id)a0 roomID:(id)a1;
- (id)__observedRoomInfoWithKey:(id)a0;
- (void)__updateObservedRoomInfo:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id).cxx_construct;
- (void)removeObserver:(id)a0;

@end
