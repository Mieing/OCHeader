@class NSString, NSMutableDictionary;

@interface AWEShowMonetizeTraceImpl : HTSService <HTSService, AWEShowMonetizeTraceService>

@property (retain, nonatomic) NSMutableDictionary *traceInfoByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)trackMonetizeLinkResultWithErrorCode:(long long)a0 errorMsg:(id)a1 subErrorCode:(long long)a2 awemeParams:(id)a3 extraParams:(id)a4;
- (void)trackMonetizeNodeWithName:(id)a0 awemeParams:(id)a1 extraParams:(id)a2;
- (void)trackMonetizeNodeWithName:(id)a0 aweme:(id)a1 extraParams:(id)a2;
- (void)trackMonetizeLinkResultWithErrorCode:(long long)a0 aweme:(id)a1 extraParams:(id)a2;
- (void)setPaidSuccessStep:(unsigned long long)a0 forAwemeID:(id)a1;
- (void)traceMonitorEvent:(id)a0 aweme:(id)a1 params:(id)a2;
- (void)traceMonitorEvent:(id)a0 awemeParams:(id)a1 params:(id)a2;
- (void)setPaidSuccessStep:(unsigned long long)a0 forAwemeID:(id)a1 traceInfoConfigHandler:(id /* block */)a2;
- (unsigned long long)getPaidSuccessStepForAwemeID:(id)a0;
- (void)checkHasOtherPaidInProgressForWillDisplayWithAwemeID:(id)a0;
- (void)trackMonetizeLinkSucceedResultWithAweme:(id)a0 extraParams:(id)a1;
- (void)trackMonetizeLinkResultWithErrorCode:(long long)a0 awemeParams:(id)a1 extraParams:(id)a2;
- (void)trackMonetizeLinkResultWithErrorCode:(long long)a0 errorMsg:(id)a1 subErrorCode:(long long)a2 aweme:(id)a3 extraParams:(id)a4;
- (void)trackCalculationTimeWithName:(id)a0 currentTime:(double)a1 calculationStep:(unsigned long long)a2 model:(id)a3 extraParams:(id)a4;
- (void)videoPlayWithNotification:(id)a0;
- (void)traceMonitorEvent:(id)a0 params:(id)a1;
- (id)getIndexParamsForEventParams:(id)a0;
- (void)traceMonetizeLinkResultWithItemID:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2 subErrorCode:(long long)a3 awemeParams:(id)a4 extraParams:(id)a5;
- (id)commonParamsForAwemeParams:(id)a0;
- (id)traceAndTrackCommonEvent;
- (id)traceParamsWithItemID:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2 subErrorCode:(long long)a3;
- (void)reportStackWithErrorCode:(long long)a0 awemeParams:(id)a1 extraParams:(id)a2;
- (void)traceForErrorCode:(long long)a0 params:(id)a1;
- (id)errorNameForErrorCode:(long long)a0;
- (void).cxx_destruct;

@end
