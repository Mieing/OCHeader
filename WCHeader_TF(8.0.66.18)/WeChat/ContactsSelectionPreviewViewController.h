@class MMTableView, NSArray, NSString, UIView, WCColorProxy, UIButton;
@protocol ContactsSelectionPreviewViewControllerDelegate;

@interface ContactsSelectionPreviewViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIButton *completeButton;
@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) UIView *bottomBar;
@property (weak, nonatomic) id<ContactsSelectionPreviewViewControllerDelegate> delegate;
@property (retain, nonatomic) WCColorProxy *colorProxy;
@property (retain, nonatomic) NSArray *selectedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initView;
- (void)initBottomBar;
- (void)viewDidLayoutSubviews;
- (void)updateWithCompleteBarButtonItem:(id)a0;
- (void)updateSelectAllButtonIcon;
- (void)onDone:(id)a0;
- (void)onTapSelectAllButton;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
