@protocol MMLimitedModeVerifyPasswordLogicDelegate;

@interface MMLimitedModeVerifyPasswordLogic : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<MMLimitedModeVerifyPasswordLogicDelegate> m_delegate;

- (void)checkPasswordExist;
- (void)verifyPassword:(id)a0;
- (void)onCheckPasswordExistResp:(id)a0;
- (void)onVerifyPasswordResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
