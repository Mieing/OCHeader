@class WCBaseTextFieldItem, UITextView;

@interface MMExptHitToolsViewController : MMUIViewController {
    unsigned int m_selectedExptId;
    WCBaseTextFieldItem *m_inputExptId;
    UITextView *stepOneTv;
    UITextView *stepTwoTv;
    UITextView *stepThreeTv;
    UITextView *exptInfoTv;
}

- (void)viewDidLoad;
- (void)dealloc;
- (void)initView;
- (id)genHeaderView;
- (id)genStepView;
- (void)resetUI:(unsigned int)a0;
- (void)onClickReqBtn:(id)a0;
- (void)onClickConfirm:(id)a0;
- (void)onClickTryHitBtn:(id)a0;
- (void)checkExptHit:(unsigned int)a0;
- (id)getExptItem:(id)a0;
- (void)showToast:(id)a0;
- (void).cxx_destruct;

@end
