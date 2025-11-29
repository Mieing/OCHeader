@class NSString;

@interface IESGCPToastFactoryService_Douyin : NSObject <IESGCPToastFactoryService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showHUD:(id)a0 inView:(id)a1;
- (void)hideHUD;
- (void)showDUXToast:(id)a0 withCenterPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)showDUXNotificationWithTitle:(id)a0 withActionView:(id)a1 containerView:(id)a2;
- (void)showToast:(id)a0 inView:(id)a1;
- (void)showHUD:(id)a0;

@end
