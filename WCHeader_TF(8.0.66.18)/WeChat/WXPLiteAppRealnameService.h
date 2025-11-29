@class NSString, UIViewController, WCPayRealnameSelectGuardianViewController;

@interface WXPLiteAppRealnameService : NSObject <WCPayRealnameSelectGuardianViewControllerDelegate>

@property (weak, nonatomic) UIViewController *curViewController;
@property (retain, nonatomic) WCPayRealnameSelectGuardianViewController *selectGuardianVC;
@property (copy, nonatomic) id /* block */ verifyParentCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startUnderAgeParentVerify:(id)a0 dict:(id)a1 callback:(id /* block */)a2;
- (void)selectGuardianViewControllerDidCancel;
- (void)selectGuardianViewControllerRequestToHandleRouteInfo:(id)a0;
- (void)selectGuardianViewControllerDidVerifyParentFromLiteApp:(BOOL)a0 appid:(id)a1 path:(id)a2 query:(id)a3;
- (void)notifyRealNameResult:(id)a0;
- (void)notifyRealNameCancel;
- (void).cxx_destruct;

@end
