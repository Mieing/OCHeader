@protocol MMLimitedModeGuardianLogicDelegate;

@interface MMLimitedModeGuardianLogic : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<MMLimitedModeGuardianLogicDelegate> m_delegate;

- (void)getTeenagerModePreBindGuardianInfo:(id)a0 bindScene:(unsigned long long)a1;
- (void)onGetTeenagerModePreBindGuardianInfo:(id)a0;
- (void)bindTeenagerModeGuardian:(id)a0 ticket:(id)a1 bindScene:(unsigned long long)a2;
- (void)onBindTeenagerModeGuardian:(id)a0;
- (void)unbindTeenagerModeGuardian:(id)a0;
- (void)onUnBindTeenagerModeGuardian:(id)a0;
- (void)agreeTeenagerModeAuthorization:(id)a0 businessKey:(id)a1 businessType:(unsigned int)a2 requestAuthorizationMsgid:(unsigned long long)a3;
- (void)onAgreeTeenagerModeAuthorization:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
