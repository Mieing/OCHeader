@class CXCallObserver, NSMutableArray, NSString;

@interface IESLiveCallCenterManager : NSObject <CXCallObserverDelegate>

@property (retain, nonatomic) NSMutableArray *blockArray;
@property (retain, nonatomic) CXCallObserver *callObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)unregisterCallEventHandler:(id /* block */)a0;
- (void)registerCallEventHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)init;
- (void)setup;

@end
