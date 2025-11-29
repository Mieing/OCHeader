@class NSString, WCTableViewNormalCellManager, MMTableViewInfo;

@interface NameEditorViewController : MMUIViewController <UITextFieldDelegate> {
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_nsFooterTip;
    NSString *m_nsHeaderTip;
    id m_targetOnSave;
    SEL m_selOnSave;
}

@property (retain, nonatomic) NSString *m_nsOldText;
@property (nonatomic) BOOL m_bEnableEmpty;
@property (nonatomic) BOOL m_bAutoDismis;
@property (retain, nonatomic) id m_userData;
@property (retain, nonatomic) WCTableViewNormalCellManager *m_editInfo;
@property (nonatomic) unsigned int m_uiScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)disMissThisViewAnimated;
- (void)onSaveText;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)updateWordCount:(id)a0;
- (id)initWithSaveTarget:(id)a0 sel:(SEL)a1 footerTip:(id)a2 textTip:(id)a3;
- (id)initWithSaveTarget:(id)a0 sel:(SEL)a1 headerTip:(id)a2 footerTip:(id)a3 textTip:(id)a4;
- (void)dealloc;
- (void)registerYReportSdk;
- (unsigned long long)logid;
- (void)enableAutoCorrect:(BOOL)a0;
- (void).cxx_destruct;

@end
