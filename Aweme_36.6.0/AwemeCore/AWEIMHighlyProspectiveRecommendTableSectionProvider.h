@class NSString, NSMutableSet, AWEIMChatListViewController;

@interface AWEIMHighlyProspectiveRecommendTableSectionProvider : NSObject <AWEIMHighlyProspectiveRecommendTableViewCellDelegate, AWEIMHighlyProspectiveRecommendHeaderFooterViewDelegate>

@property (retain, nonatomic) NSMutableSet *chatRelatedCellHasDisplaySet;
@property (nonatomic) BOOL hasTrackerOpenButton;
@property (nonatomic) BOOL hasMore;
@property (weak, nonatomic) AWEIMChatListViewController *chatListViewController;
@property (nonatomic) BOOL showHasMoreFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)viewControllerWillDisappear;
- (double)heightForCellAtIndex:(long long)a0;
- (id)viewForHeader;
- (void)willDisplayCell:(id)a0 atIndex:(long long)a1;
- (BOOL)hasOpenHighlyProspective;
- (void)__addKVO;
- (void)viewControllerViewDidDisappear;
- (id)getHighlyRecommendTabEmptyTitle;
- (id)getHighlyRecommendTabEmptySubTitle;
- (void)removeRecommendCellWithModel:(id)a0;
- (id)getEmptySubTitle;
- (id)getEmptyTitle;
- (void)trackerOpenHighlyProspectiveShow;
- (BOOL)currentIsUnOpenHighlyProspective;
- (void)didClickRecommendCellWithClickType:(id)a0 model:(id)a1;
- (void)didClickRecommendCellWithModel:(id)a0;
- (void)didClickCloseImageView;
- (void)didClickIntroductionImageView;
- (void).cxx_destruct;
- (id)init;
- (long long)numberOfCells;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)viewModels;
- (double)heightForHeader;
- (id)cellAtIndex:(long long)a0;

@end
