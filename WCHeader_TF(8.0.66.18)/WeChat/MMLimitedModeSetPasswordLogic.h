@protocol MMLimitedModeSetPasswordLogicDelegate;

@interface MMLimitedModeSetPasswordLogic : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<MMLimitedModeSetPasswordLogicDelegate> m_delegate;

- (void)setPassword:(id)a0 type:(int)a1;
- (void)setPassword:(id)a0 withName:(id)a1 idNumber:(id)a2;
- (void)resetPassword:(id)a0 withTicket:(id)a1;
- (void)clearPasswordWithTicket:(id)a0;
- (void)setPasswordType:(unsigned int)a0 withCode:(id)a1 name:(id)a2 idNumber:(id)a3 ticket:(id)a4;
- (void)onSetTeenagerModePwdResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
