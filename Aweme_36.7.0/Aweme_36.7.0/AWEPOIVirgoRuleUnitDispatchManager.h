@class NSLock, AWEPOIVirgoUnitDefaultManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEPOIVirgoRuleUnitDispatchManager : NSObject

@property (retain, nonatomic) NSMutableArray *unitManagerList;
@property (retain, nonatomic) AWEPOIVirgoUnitDefaultManager *defaultManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *custom_queue;
@property (retain, nonatomic) NSLock *dispatchLock;

- (void)registerUnit:(id /* block */)a0 withKey:(id)a1;
- (void)removeUnitWithKey:(id)a0;
- (void)registerUnitManager:(id)a0;
- (void)executeWithUnit:(id)a0 completion:(id /* block */)a1;
- (void)dispatchAsyncAtMain:(BOOL)a0 delay:(long long)a1 unitKey:(id)a2 params:(id)a3 completion:(id /* block */)a4;
- (void)dispatchIDLEWithUnitKey:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)dispatchSyncWithUnitKey:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)executeWithUnitKey:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
