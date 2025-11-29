@class NSString, SettingModifyEmailLogic;

@interface SettingModifyEmailBaseViewController : MMAcceptAgreementBaseViewController <SettingModifyEmailLogicDelegate>

@property (readonly, nonatomic) SettingModifyEmailLogic *emailLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEmailLogic:(id)a0;
- (id)getViewController;
- (void).cxx_destruct;

@end
