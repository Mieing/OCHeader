@class NSString, WCMallControlData;

@interface WCMallControlLogic : WCBizControlLogic <WCMallLogicMgrExt> {
    WCMallControlData *m_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithData:(id)a0;
- (void)resume;
- (void)pause;
- (void)stopLogic;
- (BOOL)onError:(id)a0;
- (void)onErrorAlertViewStopLogic:(id)a0;
- (void).cxx_destruct;

@end
