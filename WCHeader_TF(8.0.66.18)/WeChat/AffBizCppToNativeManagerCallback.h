@interface AffBizCppToNativeManagerCallback : NSObject {
    struct AffBizCppToNativeManagerDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffBizCppToNativeManagerDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct AffBizCppToNativeManagerDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffBizCppToNativeManagerDispatcherCallback *x1; id x2; } *)a0;
- (void)onMarkBrandListDBAsCompressBeginComplete:(int)a0;
- (void)onMarkBrandListDBAsCompressFinishComplete:(int)a0;
- (void)onGetResortContextComplete:(int)a0 context:(id)a1;
- (void)onOnBizDigestFinderLiveInfoChangedComplete:(int)a0;
- (void)onGetBizPoiInfoComplete:(int)a0 userLocation:(id)a1;
- (void)onCallOnDataChangeComplete:(int)a0;
- (void)onCallOnInitDoneComplete:(int)a0;
- (void)onCallOnIDKeyComplete:(int)a0;
- (void)onCallOnKVComplete:(int)a0;
- (void)onCallOnFirstScreenPreResortComplete:(int)a0;
- (void)onCallOnFirstScreenResortStartComplete:(int)a0;
- (void)onCallOnFirstScreenResortEndComplete:(int)a0;
- (void)onCallOnNotifyMsgChangeComplete:(int)a0;

@end
