@class NSObject, NSString, NSArray, LSNaviBar, LSIMCommonModalViewController, LSIMBizConversation, LSIMMemberSearchBar, UITableView, LSStatusView, LSIMMemberManager;
@protocol LSIMLoadingToastProtocol, LSIMMemberSearchViewControllerDelegate;

@interface LSIMMemberSearchViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, LSIMMemberSearchBarDelegate, LSIMMemberSearchTableViewCellDelegate>

@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) LSIMBizConversation *conversation;
@property (weak, nonatomic) LSIMMemberManager *memberManager;
@property (retain, nonatomic) LSIMCommonModalViewController *modalVC;
@property (retain, nonatomic) LSNaviBar *naviBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) LSIMMemberSearchBar *searchBar;
@property (retain, nonatomic) LSStatusView *statusView;
@property (retain, nonatomic) NSObject<LSIMLoadingToastProtocol> *loadingView;
@property (copy, nonatomic) NSArray *groupMembers;
@property (copy, nonatomic) NSArray *searchGroupMembers;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL isMakingConversation;
@property (weak, nonatomic) id<LSIMMemberSearchViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)commonModalViewDidClosed:(id)a0;
- (void)searchBarDidBeginInput:(id)a0;
- (void)makeConversationDidTappedWithParticipant:(id)a0;
- (void)p_sortMembers;
- (id)useDataSource;
- (BOOL)resignSearchBar;
- (void)p_handleMakeConversationWithParticipant:(id)a0;
- (id)initWithStyle:(unsigned long long)a0 groupConversation:(id)a1 memberManager:(id)a2;
- (void)p_trackerClickSearch;
- (BOOL)isFullScreen;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)closeButtonTapped:(id)a0;

@end
