@class UITableView, NSArray, NSString, UIView, UIButton;

@interface IESLiveSearchPlaceholderViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *historyWords;
@property (retain, nonatomic) UIButton *footerUnfoldButton;
@property (retain, nonatomic) UIView *sepLineView;
@property (nonatomic) BOOL isUnfold;
@property (copy, nonatomic) id /* block */ historyKeywordTapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (BOOL)isNewFeedDrawStyle;
- (void)hideSearchPlaceholderView;
- (void)showSearchPlaceholderView;
- (void)configureDataWithHistoryWords:(id)a0;
- (void)changeFooterButtonState:(BOOL)a0;
- (void)unfoldButtonTapped;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
