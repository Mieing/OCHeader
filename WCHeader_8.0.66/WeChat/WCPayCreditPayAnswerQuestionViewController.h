@class WCPayQuestionSelectItem, NSString, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCBizInfoGroup, WCPayCreditPayQuestionNode, UIButton;
@protocol WCPayCreditPayAnswerQuestionViewControllerDelegate;

@interface WCPayCreditPayAnswerQuestionViewController : WCPayBaseViewController <WCPayCreditPaySelectQuestionViewControllerDelegate> {
    UIButton *m_footerButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCBaseTextFieldItem *m_firstQuestionItem;
    WCBaseTextFieldItem *m_firstAnswerTextFieldItem;
    WCPayQuestionSelectItem *m_firstSelectItem;
    WCBaseTextFieldItem *m_firstNextQuestionItem;
    WCBaseTextFieldItem *m_secondQuestionItem;
    WCBaseTextFieldItem *m_secondAnswerTextFieldItem;
    WCPayQuestionSelectItem *m_secondSelectItem;
    WCBaseTextFieldItem *m_secondNextQuestionItem;
    WCBizInfoGroup *m_group;
    id<WCPayCreditPayAnswerQuestionViewControllerDelegate> m_delegate;
    unsigned int m_uiQuestionIndex;
    WCPayCreditPayQuestionNode *m_firstQuestionNode;
    WCPayCreditPayQuestionNode *m_secondQuestionNode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)getQuestionItemHeight:(id)a0;
- (void)reloadTableView;
- (void)clickQuestionCell:(id)a0;
- (void)clickSelectItemCell:(id)a0;
- (void)setSelected:(id)a0 selected:(BOOL)a1;
- (void)setAnswer:(id)a0 answer:(id)a1;
- (void)WCPayCreditPaySelectQuestionViewControllerSelected:(id)a0;
- (void)makeQuestionCell:(id)a0 cellInfo:(id)a1;
- (void)makeAnswerCell:(id)a0 cellInfo:(id)a1;
- (void)initFooterView;
- (void)reloadTextFieldItem;
- (void)initNavigationBar;
- (void)onBack;
- (void)onConfirmToBack;
- (void)initMyData;
- (void)initMyView;
- (void)viewDidLoad;
- (void)setDelegate:(id)a0;
- (id)getCommitAnswerTips;
- (void)onNext;
- (void)onConfirmToCommit;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (BOOL)canDoNext;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void).cxx_destruct;

@end
