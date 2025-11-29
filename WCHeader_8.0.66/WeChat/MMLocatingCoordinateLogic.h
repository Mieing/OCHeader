@class NSMutableDictionary, TencentLBSLocationManager;

@interface MMLocatingCoordinateLogic : NSObject <ILocationMgrExt>

@property (retain, nonatomic) TencentLBSLocationManager *locationMgr;
@property (retain, nonatomic) NSMutableDictionary *completionDict;
@property (retain, nonatomic) NSMutableDictionary *requestObjDict;

- (id)init;
- (void)requestSelfLocation:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)getSelfLocationCoordinateWithoutReqPermission:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)requestSelfAddress:(unsigned long long)a0 params:(id)a1 withCompletion:(id /* block */)a2;
- (void)requestAddressByLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 params:(id)a1 withCompletion:(id /* block */)a2;
- (void)requestAddressByPoiId:(id)a0 withCompletion:(id /* block */)a1;
- (void)onDidFindAddress:(id)a0 forTag:(unsigned long long)a1;
- (void)onCancelRequestAddressForTag:(unsigned long long)a0;
- (void).cxx_destruct;

@end
