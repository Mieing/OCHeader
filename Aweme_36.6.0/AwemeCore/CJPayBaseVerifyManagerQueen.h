@class NSString, CJPayBaseVerifyManager;

@interface CJPayBaseVerifyManagerQueen : NSObject <CJPayTrackerProtocol>

@property (weak, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerBtmPage:(id)a0 params:(id)a1;
- (void)event:(id)a0 params:(id)a1;
- (void)trackBTMModuleClick:(id)a0 params:(id)a1;
- (void)trackBTMModuleShow:(id)a0 params:(id)a1;
- (void)trackBTMModuleCustom:(id)a0 params:(id)a1;
- (id)p_createBTMParams:(id)a0 host:(id)a1 params:(id)a2;
- (BOOL)p_enableBTM;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)trackCashierWithEventName:(id)a0 params:(id)a1;
- (void)trackVerifyWithEventName:(id)a0 params:(id)a1;
- (void)trackCashierWithBtmEvent:(id)a0 btm:(id)a1 params:(id)a2;
- (void)bindManager:(id)a0;
- (void)afterConfirmRequestWithResponse:(id)a0;
- (id)cashierExtraTrackerParams;
- (void)afterLastQueryResultWithResultResponse:(id)a0;
- (void)beforeConfirmRequest;
- (id)getCashierTrackParams;
- (void)beforQueryResult;
- (id)getVerifyTrackParams;
- (void)retainUsers;
- (void)trackVerifyWithBtmEvent:(id)a0 btm:(id)a1 params:(id)a2;
- (void)updateSourceBTMToken:(id)a0;
- (void).cxx_destruct;

@end
