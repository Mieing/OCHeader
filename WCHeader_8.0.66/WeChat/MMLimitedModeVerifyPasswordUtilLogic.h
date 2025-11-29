@class NSString, MMUIViewController, MMLimitedModeVerifyPasswordLogic;
@protocol MMLimitedModeVerifyPasswordUtilLogicDelegate;

@interface MMLimitedModeVerifyPasswordUtilLogic : NSObject <MMLimitedModeVerifyPasswordLogicDelegate, MMLimitedModeIndependentVerifyViewControllerDelegate> {
    MMLimitedModeVerifyPasswordLogic *m_limitedModeVerifyPasswordLogic;
    unsigned int m_scene;
    BOOL m_isLoading;
}

@property (weak, nonatomic) MMUIViewController *vc;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) id<MMLimitedModeVerifyPasswordUtilLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCheckLimitedModeVerifyPasswordInViewController:(id)a0 scene:(unsigned int)a1;
- (void)goToSetLimitedModeViewController:(id)a0 scene:(unsigned int)a1;
- (void)goToSetLimitedModeViewController:(id)a0 scene:(unsigned int)a1 completionBlock:(id /* block */)a2;
- (void)doCheckLimitedModeVerifyPasswordInViewController:(id)a0;
- (void)onCheckPasswordExist:(BOOL)a0 isNeverUse:(BOOL)a1 success:(BOOL)a2 errMsg:(id)a3;
- (void)onVerifyPasswordSuccessTicket:(id)a0;
- (void).cxx_destruct;

@end
