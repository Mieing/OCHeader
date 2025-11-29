@class NSArray, NSString, UILabel, MMUIButton, MMTableView;
@protocol WCMomentsUserListHalfScreenViewControllerDelegate;

@interface WCMomentsUserListHalfScreenViewController : MMUIHalfScreenViewController <UITableViewDataSource, UITableViewDelegate>

@property (copy, nonatomic) NSArray *userContacts;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *closeButon;
@property (weak, nonatomic) id<WCMomentsUserListHalfScreenViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithUserContacts:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)fitSuitableHeight;
- (void)loadTableView;
- (void)loadTopViews;
- (void)closeButtonClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
