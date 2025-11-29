@class IESLiveAnchorDialog, NSString;

@interface IESLiveOldManProtectedFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (weak, nonatomic) IESLiveAnchorDialog *dialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (BOOL)isRemindMessage:(id)a0;
- (BOOL)isForceMessage:(id)a0;
- (BOOL)isForceCloseMessage:(id)a0;
- (void)showRemindMessage:(id)a0;
- (void)showForceMessage:(id)a0;
- (void)showForceCloseMessage:(id)a0;
- (void)showCloseRoomAlertWithMesage:(id)a0 willShowHanler:(id /* block */)a1 didCloseHandler:(id /* block */)a2 countdownHandler:(id /* block */)a3;
- (id)praserLiveText:(id)a0;
- (void).cxx_destruct;
- (void)showMessage:(id)a0;
- (void)messageReceived:(id)a0;

@end
