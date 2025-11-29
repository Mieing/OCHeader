@class NSString;
@protocol RTVMultipleDelegateInterface, RxInjector, RTVXRRoomActionControllerObserver;

@interface RTVXRRoomActionController : NSObject <RTVXRRoomActionController>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVXRRoomActionControllerObserver> observers;
@property (copy, nonatomic) id /* block */ actionRequestBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)didPerformAction:(id)a0 withResult:(id)a1;
- (id)requestTransactionWithAction:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
