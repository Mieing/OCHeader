@class DYASecurityTicketModel, NSString, AWEUserComponentSubtitleModel, NSError, AWEUserLoginInputModel;

@interface AWEUserResetPasswordViewModel : AWEUserContainerBaseViewModel

@property (retain, nonatomic) AWEUserComponentSubtitleModel *customSubtitleModel;
@property (retain, nonatomic) DYASecurityTicketModel *ticketModel;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (retain, nonatomic) AWEUserLoginInputModel *passwordInputModel;
@property (retain, nonatomic) AWEUserLoginInputModel *passwordCheckInputModel;
@property (readonly, nonatomic) NSString *inputPassword;
@property (readonly, nonatomic) NSString *inputCheckPassword;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long sendScene;

- (void)handleButtonClick;
- (id)buttonNotAvailableToastText;
- (id)componentTypeList;
- (void)bindingComponentInfo;
- (void)viewModelBindingUI;
- (id)trackEventStringWithEventType:(long long)a0;
- (id)trackEventParamsWithEventType:(long long)a0;
- (id)naviBarContext;
- (id)subtitleModel;
- (void)requestResetPassword;
- (id)initWithTicketModel:(id)a0 sendScene:(long long)a1;
- (id)initWithFinish:(id /* block */)a0;
- (BOOL)isFromInitialAccount;
- (void)resetButtonStatusAndError;
- (BOOL)twiceInputPasswordEqual;
- (void)handleRequestResultError:(id)a0;
- (void)requestSetPassword;
- (void).cxx_destruct;
- (id)titleText;
- (id)buttonText;

@end
