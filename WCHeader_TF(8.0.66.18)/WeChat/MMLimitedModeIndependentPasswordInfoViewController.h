@class FixTitleColorButton, NSString, UITableViewCell, MMTableViewInfo, UITextView, WCTableViewNormalCellManager, MMLimitedModeSetPasswordLogic, MMUILabel;

@interface MMLimitedModeIndependentPasswordInfoViewController : MMUIViewController <MMTableViewInfoDelegate, UITextViewDelegate, UITextFieldDelegate, MMLimitedModeSetPasswordLogicDelegate> {
    MMTableViewInfo *m_tableViewInfo;
    UITextView *m_tfInputName;
    UITextView *m_tfInputIdCard;
    FixTitleColorButton *m_acceptBtn;
    double m_fKeyboardHeight;
    MMUILabel *m_inputNameTitleLabel;
    MMUILabel *m_inputIdCardTitleLabel;
    UITableViewCell *m_inputNameCell;
    UITableViewCell *m_inputIdCardCell;
    WCTableViewNormalCellManager *m_inputNameCellInfo;
    WCTableViewNormalCellManager *m_inputIdCardCellInfo;
    MMLimitedModeSetPasswordLogic *m_setPasswordLogic;
    BOOL m_isShowErrorTip;
}

@property (retain, nonatomic) NSString *m_inputPassword;
@property (nonatomic) unsigned int m_setLimitedModePwdType;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)resetRightBarButton;
- (void)initTableView;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)reloadTableViewInfo;
- (id)getIndependentPasswordInfoHeadView;
- (void)makeInputNameEdit:(id)a0;
- (void)makeInputIdCardEdit:(id)a0;
- (void)updateInputTitleLabelSize;
- (void)fixNameCellHeight;
- (void)fixIdCardCellHeight;
- (void)initInputNameEdit;
- (void)initInputIdCardEdit;
- (void)initInputTitleLabel;
- (void)initAcceptBtn;
- (double)getkeyboardHideAcceptBtnBottom;
- (double)getkeyboardShowAcceptBtnBottom;
- (void)buttonStartLoading;
- (void)buttonStopLoading;
- (BOOL)isValidIdCardNumber:(id)a0;
- (BOOL)idCardNumberAgeUnder18:(id)a0;
- (BOOL)checkEdit;
- (void)didAccept;
- (void)OnReturn;
- (void)checkAcceptBtnBottomLocal;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)a0;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)a0 ticket:(id)a1 success:(BOOL)a2 errMsg:(id)a3;
- (id)navigationBarBackgroundColor;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void).cxx_destruct;

@end
