@class UIView, NSString, NSArray, BDPLoadingAnimationView, UIButton, UITableView, UITextField, NSObject;
@protocol OS_dispatch_queue;

@interface BDPChooseLocSearchViewController : UIViewController <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {
    BOOL _scrollToEnd;
    BOOL _needLoadingView;
    UIView *_searchView;
    UIView *_backgroundView;
    UIView *_tableHeaderView;
    UIButton *_cancleButton;
    UITextField *_searchText;
    UITableView *_locTableView;
    NSArray *_dataArray;
    long long _selectRow;
    long long _searchPage;
    NSObject<OS_dispatch_queue> *_taskQueue;
    BDPLoadingAnimationView *_loadingView;
    id /* block */ _resultCallback;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _userLoc;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onTextFieldTextChanged:(id)a0;
- (void)onClickCancleButton;
- (id)initWithParams:(id)a0 callback:(id /* block */)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
