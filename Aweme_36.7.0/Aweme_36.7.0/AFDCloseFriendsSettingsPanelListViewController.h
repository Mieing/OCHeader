@class AWELoadMoreFooter, NSString, UIView, NSObject, AFDCloseFriendsMomentContext;
@protocol AFDCloseFriendsSettingsPanelStrategyProtocol, AFDCloseFriendsSettingsPanelListViewControllerDelegate;

@interface AFDCloseFriendsSettingsPanelListViewController : AWEBaseListViewController <AFDCloseFriendsSettingsPanelListSectionControllerDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) NSObject<AFDCloseFriendsSettingsPanelStrategyProtocol> *currentStrategy;
@property (retain, nonatomic) AWELoadMoreFooter *loadMoreFooter;
@property (retain, nonatomic) AFDCloseFriendsMomentContext *context;
@property (nonatomic) struct CGPoint { double x; double y; } historyContentOffset;
@property (weak, nonatomic) id<AFDCloseFriendsSettingsPanelListViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) UIView *searchEmptyResultView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 originalTargetContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)setupBinding;
- (BOOL)isSelectedWithUserID:(id)a0;
- (BOOL)isEnabledWithUser:(id)a0;
- (void)didSelectUser:(id)a0;
- (id)initWithStrategy:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)fetchData;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (long long)totalItemCount;
- (void)setupUI;
- (void)searchWithText:(id)a0;
- (void)setupCollectionView:(id)a0;
- (void)layoutUI;

@end
