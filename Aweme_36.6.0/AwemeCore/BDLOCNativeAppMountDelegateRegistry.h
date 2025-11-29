@class NSMapTable;

@interface BDLOCNativeAppMountDelegateRegistry : NSObject

@property (retain, nonatomic) NSMapTable *delegates;

- (id)mountedDataForAppID:(id)a0;
- (void)nativeApp:(id)a0 cancelMountWithParams:(id)a1 completion:(id /* block */)a2;
- (void)nativeApp:(id)a0 didMountWithParams:(id)a1 coverImage:(id)a2 completion:(id /* block */)a3;
- (void)getProductInfoWithAppId:(id)a0 schema:(id)a1 timeout:(id)a2 completion:(id /* block */)a3;
- (void)registerDelegate:(id)a0 forApp:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
