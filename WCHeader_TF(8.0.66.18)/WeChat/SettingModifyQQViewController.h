@class NSString, UIViewController, MMTableViewInfo;
@protocol SettingModifyQQViewControllerDelegate;

@interface SettingModifyQQViewController : AccountBaseViewController <IQQAccountMgrExt> {
    MMTableViewInfo *m_tableViewInfo;
}

@property (nonatomic) unsigned int m_uiBindQQUin;
@property (retain, nonatomic) UIViewController *m_vcAccount;
@property (weak, nonatomic) id<SettingModifyQQViewControllerDelegate> m_SettingModifyQQViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onUnBindAccount;
- (void)confirmUnBind;
- (void)onUnBind:(id)a0;
- (void)ShowBindQQView;
- (void)onCancel:(id)a0;
- (void)updateTableCell;
- (id)getHeaderView;
- (void)updateViewOnQQChange;
- (void)OnUnBindQQFail:(id)a0;
- (void)OnUnBindQQOK;
- (void)OnBindQQChange;
- (void)OnOperate;
- (void)doRegester;
- (void)undoRegester;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)makeCell:(id)a0;
- (void).cxx_destruct;

@end
