@class MMTableView, NSString, MMUILongPressMenuView, UIButton;

@interface MMMailContactViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, LongPressMenuViewDelegate> {
    MMTableView *_tableView;
    UIButton *_sendMailBtn;
    MMUILongPressMenuView *_nameView;
    MMUILongPressMenuView *_addressView;
}

@property (retain, nonatomic) NSString *nsMailContactName;
@property (retain, nonatomic) NSString *nsMailContactAddress;
@property (nonatomic) BOOL bShowSendBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onLongPressMenuViewCopy:(id)a0;
- (void)onSendMail:(id)a0;
- (void)MenuControllerWillShow:(id)a0;
- (void)MenuControllerWillHide:(id)a0;
- (void).cxx_destruct;

@end
