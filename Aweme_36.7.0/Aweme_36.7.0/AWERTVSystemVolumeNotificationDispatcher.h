@class NSNumber, NSString;
@protocol RTVSystemVolumeChangeObserver, RTVMultipleDelegateInterface, RxInjector;

@interface AWERTVSystemVolumeNotificationDispatcher : NSObject <RTVSystemVolumeNotificationDispatcherProtocol>

@property (readonly, nonatomic) id<RTVSystemVolumeChangeObserver, RTVMultipleDelegateInterface> observers;
@property (readonly, nonatomic) NSNumber *obseverToken;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__handleVolumeChangeFrom:(double)a0 toValue:(double)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
