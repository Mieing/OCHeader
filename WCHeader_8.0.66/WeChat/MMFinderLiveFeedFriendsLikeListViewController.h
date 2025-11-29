@class UILabel, NSString, MMTableView, WCFinderDataItem, WCFinderDynamicRichTextView, NSMutableSet, MMUIButton, MMFinderLiveFeedFriendsLikeListViewModel;

@interface MMFinderLiveFeedFriendsLikeListViewController : WCFinderFeedFriendsLikeListBaseViewController <UITableViewDataSource, UITableViewDelegate, MMFinderLiveFeedFriendsLikeListViewModelDelegate, MMFinderLiveFeedFriendsLikeListTableViewCellDelegate, MMUIHalfScreenViewControllerDelegate, WCFinderRefuseLikeListViewControllerDelegate, WCFinderHalfScreenProtocol>

@property (nonatomic) unsigned long long totalLikeCount;
@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) int reportScene;
@property (retain, nonatomic) MMFinderLiveFeedFriendsLikeListViewModel *viewModel;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) MMUIButton *moreBtn;
@property (retain, nonatomic) WCFinderDynamicRichTextView *titleIconView;
@property (nonatomic) double heightRatio;
@property (nonatomic) BOOL showFinderIdentifier;
@property (nonatomic) BOOL highlightLocated;
@property (retain, nonatomic) NSMutableSet *highlightUsernameSet;
@property (nonatomic) BOOL dynamicHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 reportScene:(int)a1;
- (id)initWithDataItem:(id)a0 likeList:(id)a1 reportScene:(int)a2;
- (void)viewDidLoad;
- (void)setupHeight;
- (double)getMaxHalfScreenHeight;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)addHighlightUsernames:(id)a0;
- (void)setupSubViews;
- (BOOL)calculateShowFinderIdentifier;
- (void)updateTitleLableWithCount:(unsigned long long)a0;
- (void)onClickClose;
- (void)onClickMore;
- (void)setupData;
- (void)resetDetailToInitStatus;
- (void)refreshUIWithUpdateTitle:(BOOL)a0;
- (void)locateHighlightIfNeed;
- (id)displayTitle:(unsigned long long)a0;
- (id)titleAccessibilityLabel:(unsigned long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)finderFeedFriendsLikeListGetLocalSuccess;
- (void)onHalfScreenPageWillClose:(id)a0 action:(long long)a1;
- (void)exposeFriendsLikeList;
- (void)reportFriendsLikeListWithIndex:(unsigned long long)a0 action:(unsigned long long)a1;
- (void)onRefuseLikeListClickBackItem;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)a0;
- (void).cxx_destruct;

@end
