@class NSString, RACSignal, ACCRecordAuthStatus, RACSubject;

@interface ACCRecordAuthServiceImpl : NSObject <ACCRecordAuthService, FPPlainInitable>

@property (retain, nonatomic) RACSubject *confirmAllowUseCameraSubject;
@property (retain, nonatomic) RACSubject *passCheckAuthSubject;
@property (retain, nonatomic) RACSubject *gotoUploadSubject;
@property (readonly, nonatomic) RACSignal *confirmAllowUseCameraSignal;
@property (readonly, nonatomic) RACSignal *passCheckAuthSignal;
@property (retain, nonatomic) ACCRecordAuthStatus *authStatus;
@property (retain, nonatomic) RACSignal *gotoUploadSignal;
@property (copy, nonatomic) NSString *customAuthorityTitle;
@property (copy, nonatomic) NSString *customAuthorityMessage;
@property (nonatomic) unsigned long long deviceAuthStatus;
@property (copy, nonatomic) id /* block */ passMicphoneAuth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerPassCheckAuthWithAuthStatus:(id)a0;
- (void)triggerGotoUploadSignal;
- (void)trigger_confirmAllowUseCamera:(BOOL)a0;
- (void)setAuthorityTitle:(id)a0;
- (void)setAuthorityMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
