@class UIScrollView, FinderLiveVotingInfo;

@interface MMFinderLiveVoteHistoryDetailViewController : MMUILandscapeSheetViewController

@property (retain, nonatomic) FinderLiveVotingInfo *votingInfo;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastLayoutRect;

- (id)initWithVotingInfo:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)initNavBar;
- (void)onBackButtonClicked;
- (id)navigationBarBackgroundColor;
- (void)rebuildContentViews;
- (void).cxx_destruct;

@end
