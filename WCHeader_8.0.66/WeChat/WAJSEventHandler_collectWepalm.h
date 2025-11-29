@class NSString, WCPayControlData;

@interface WAJSEventHandler_collectWepalm : WAJSEventHandler_BaseEvent <WCPayCollectPalmControlLogicDelegate>

@property (retain, nonatomic) WCPayControlData *controlData;
@property (nonatomic) unsigned long long handleStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (int)getIntFromStringParam:(id)a0 key:(id)a1 defaultVal:(int)a2;
- (id)wrapJSApiResult:(unsigned long long)a0 errorMessage:(id)a1;
- (void)reportJsPalmResult:(id)a0;
- (void)onWCPayCollectPalmControlLogicEndWithOK:(id)a0;
- (void)onWCPayCollectPalmControlLogicEndWithCancel:(id)a0;
- (void)onWCPayCollectPalmControlLogicEndWithFail:(id)a0;
- (void).cxx_destruct;

@end
