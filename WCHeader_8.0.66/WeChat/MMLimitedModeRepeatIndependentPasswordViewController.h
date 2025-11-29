@class NSString, MMLimitedModeSetIndependentPasswordViewController, MMLimitedModeSetPasswordLogic;

@interface MMLimitedModeRepeatIndependentPasswordViewController : MMLimitedModeSetIndependentPasswordViewController <MMLimitedModeSetPasswordLogicDelegate> {
    MMLimitedModeSetPasswordLogic *m_setPasswordLogic;
}

@property (retain, nonatomic) NSString *m_firsetInputPassword;
@property (nonatomic) unsigned int m_setLimitedModePwdType;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) MMLimitedModeSetIndependentPasswordViewController *firstInputViewController;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)getTitleLabelText;
- (BOOL)isShowGoToWechatPassWordButton;
- (BOOL)isShowDesclabel;
- (void)doInputFinishAction;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)a0 ticket:(id)a1 success:(BOOL)a2 errMsg:(id)a3;
- (void).cxx_destruct;

@end
