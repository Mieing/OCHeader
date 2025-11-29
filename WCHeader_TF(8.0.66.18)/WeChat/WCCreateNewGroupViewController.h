@class NSString, UITextField, MMTableView;
@protocol WCCreateNewGroupViewControllerDelegate;

@interface WCCreateNewGroupViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
    UITextField *m_textField;
}

@property (weak, nonatomic) id<WCCreateNewGroupViewControllerDelegate> m_delegate;
@property (retain, nonatomic) NSString *m_title;
@property (retain, nonatomic) NSString *m_placeHolderText;
@property (retain, nonatomic) NSString *m_originText;
@property (retain, nonatomic) NSString *m_hintText;
@property (retain, nonatomic) NSString *groupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTextFieldFirstResponse;
- (void)onSave;
- (void)onCancel;
- (void)initTableView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)OnDataChange;
- (void)textFieldTextDidChange:(id)a0;
- (void)makeTextCell:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
