@class MMTableView, NSString, WCBaseTextFieldItem, UIViewController;

@interface SettingBindQQViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ReturnToSettingAccoutDelegate> {
    MMTableView *m_tableView;
    unsigned int m_uiEventID;
    BOOL m_bFirstMake;
}

@property (retain, nonatomic) NSString *m_nsUsrName;
@property (retain, nonatomic) NSString *m_nsPwd;
@property (retain, nonatomic) WCBaseTextFieldItem *m_tfUsrName;
@property (retain, nonatomic) WCBaseTextFieldItem *m_tfPwd;
@property (retain, nonatomic) UIViewController *m_vcAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ShowVerifyController:(id)a0 Key:(id)a1;
- (void)StartLoading;
- (void)StopLoading;
- (BOOL)CheckInputValid;
- (unsigned int)CreateBindQQEvent;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)goToPassword:(id)a0;
- (void)OnCancel:(id)a0;
- (void)LogIn:(id)a0;
- (void)textFieldTextDidChange:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeTextFields;
- (void)makeCellOfQQ:(id)a0;
- (void)makeCellOfPwd:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)DismissSelf;
- (void)showError:(id)a0 Title:(id)a1;
- (void)OnBindQQOK;
- (void)OnBindQQErrorReturn:(id)a0;
- (void)onBindQQSussess;
- (void).cxx_destruct;

@end
