@class MMUIViewController;

@interface StrongNotificationScanLogic : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) MMUIViewController *m_sourceViewController;

- (BOOL)scanWeAppStrongNotificationWithQrcode:(id)a0;
- (void)OnScanWeAppStrongNotificationResp:(id)a0;
- (void)goToStrongNotificationAcceptViewControllerWithStrongNotificationContent:(id)a0 qrCode:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
