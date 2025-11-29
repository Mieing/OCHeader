@class NSObject, AWEInnerPushAlertBase;
@protocol AWEInnerPushAlertManagerDelegate;

@interface AWEInnerPushAlertManager : NSObject <AWEInnerPushAlertDelegate>

@property (retain, nonatomic) AWEInnerPushAlertBase *currentAlert;
@property (weak, nonatomic) NSObject<AWEInnerPushAlertManagerDelegate> *delegate;

- (void)showPush:(id)a0;
- (void)alertDismissed:(BOOL)a0;
- (void)showForcedAlert;
- (void)alertShowedOnView:(id)a0;
- (void)showForcePush:(id)a0;
- (void)dismissForcePush;
- (void).cxx_destruct;
- (void)showAlert;

@end
