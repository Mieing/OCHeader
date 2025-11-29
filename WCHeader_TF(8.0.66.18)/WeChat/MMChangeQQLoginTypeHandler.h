@class PasswordLogic, NSString;

@interface MMChangeQQLoginTypeHandler : PrivateCommonApiHandler <PasswordLogicDelegate>

@property (retain, nonatomic) PasswordLogic *pwdLogic;
@property (retain, nonatomic) NSString *loginName;
@property (nonatomic) int lastLoginAcountType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCommonApiWithParams:(id)a0;
- (void)failWithShouldSetContent:(BOOL)a0;
- (void)verifyPasswordOK:(id)a0 logic:(id)a1;
- (void)verifyPasswordError:(id)a0;
- (void)verifyPasswordFail:(id)a0;
- (void)unknownFail:(id)a0;
- (void).cxx_destruct;

@end
