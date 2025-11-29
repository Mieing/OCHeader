@class UIView, NSString, MMUITextField, ModifyPatSuffixLogic, MMGrowTextView, MMTableViewInfo, WCCommonInputPanelLogic, UIButton, MMUILabel, MMTableView, MMTimer;
@protocol SettingModifyPatSuffixViewControllerDelegate;

@interface SettingModifyPatSuffixViewController : MMAcceptAgreementBaseViewController <ModifyPatSuffixLogicDelegate, InputControllerDelegate> {
    double m_fKeyboardHeight;
    MMUITextField *m_patSuffixTextField;
    ModifyPatSuffixLogic *m_modifyPatSuffixLogic;
    MMUILabel *m_descLabel;
    MMUILabel *m_errorMsgLabel;
    MMTimer *m_timerResetErrorMsgLabelTask;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
}

@property (retain, nonatomic) MMUILabel *m_topTitleLabel;
@property (retain, nonatomic) UIButton *m_acceptBtn;
@property (retain, nonatomic) NSString *m_sessionId;
@property (retain, nonatomic) MMGrowTextView *textView;
@property (retain, nonatomic) UIView *inputBackgroundView;
@property (retain, nonatomic) WCCommonInputPanelLogic *inputPanelLogic;
@property (weak, nonatomic) id<SettingModifyPatSuffixViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldInteractiveDismiss;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(BOOL)a0;
- (void)initData;
- (id)getInitPatSuffixTextFieldText;
- (unsigned int)getMaxPatSuffixLen;
- (void)layoutNavigationBar;
- (void)layoutTableView;
- (void)layoutTopTitleLable;
- (void)layoutAcceptBtn;
- (void)layoutTextView;
- (void)initInputPanelLogic;
- (void)reloadTableViewInfo;
- (id)getChatRoomInfoHeadView;
- (void)makePatSuffixEditCell:(id)a0 CellInfo:(id)a1;
- (id)genCellLeftLabel;
- (void)initFooterView;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)didAccept;
- (id)formatPatSuffix:(id)a0;
- (BOOL)checkPatSuffixName:(id)a0;
- (void)onCancel;
- (void)changeDescLabelAndErrorMsgLabel:(BOOL)a0;
- (void)stopTimerResetErrorMsgLabelTask;
- (void)startTimerResetErrorMsgLabelTask;
- (void)onTimerResetErrorMsgLabelTask:(id)a0;
- (void)OnModifyPatSuffixWithResult:(unsigned int)a0 errorMsgTitle:(id)a1 errorMsgContent:(id)a2 errorCode:(int)a3;
- (void)reportAction:(unsigned long long)a0 withErrorCode:(int)a1;
- (id)navigationBarBackgroundColor;
- (void)didCommitText:(id)a0;
- (void)didCommitEmptyText;
- (void)MMGrowTextViewBeginEditing:(id)a0;
- (void)onInputModeChangeTo:(long long)a0 Animated:(BOOL)a1;
- (void)keyboardWillShow;
- (void)keyboardDidHide;
- (void)relayoutAcceptButton;
- (void)textDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)textViewTextDidExceedMaxLength;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end
