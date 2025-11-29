@class WCAccountForgetPasswordControlLogic, NSString;

@interface MMForgetPasswordHandler : PrivateCommonApiHandler <WCAccountForgetPasswordControlLogicDelegate>

@property (retain, nonatomic) WCAccountForgetPasswordControlLogic *forgetPwdLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
