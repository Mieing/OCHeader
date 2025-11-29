@class NSString, WCPayUnionTransferNotifyCgi;
@protocol WCPayRetrySendTransferMessageLogicDelegate;

@interface WCPayRetrySendTransferMessageControlLogic : WCPayControlLogic <WCPayUnionTransferNotifyCgiDelegate>

@property (retain, nonatomic) WCPayUnionTransferNotifyCgi *unionNotifyCgi;
@property (weak, nonatomic) id<WCPayRetrySendTransferMessageLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)ToRetrySendMsg;
- (void)onWCPayUnionTransferNotifyCgiResponseOK:(id)a0;
- (void)onWCPayUnionTransferNotifyCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)OnRetrySendTransferMessage:(id)a0 Error:(id)a1;
- (void)delayStopLogic;
- (void).cxx_destruct;

@end
