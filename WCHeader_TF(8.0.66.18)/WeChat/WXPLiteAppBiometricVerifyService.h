@class NSString;

@interface WXPLiteAppBiometricVerifyService : NSObject <WCPayOpenTouchIDAuthLogicDelegate>

@property (copy, nonatomic) id /* block */ biometricVerifyCallback;
@property (retain, nonatomic) NSString *appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportBioType;
- (void)cancelAuthenticate;
- (void)authenticate:(id)a0 callback:(id /* block */)a1;
- (void)open:(id)a0 callback:(id /* block */)a1;
- (void)onWCPayOpenTouchIDAuthLogicOpenSuccess;
- (void)onWCPayOpenTouchIDAuthLogicOpenFailed:(id)a0;
- (void).cxx_destruct;

@end
