@class NSMutableSet, NSString, UICollectionView, AWEECShoppingAIGuidePageViewModel, AWEECShoppingAIGuideContext, IGListAdapter, AWEECShoppingAIGuideCardSettingProvider;
@protocol AWEECShoppingAIGuideContentViewDelegate;

@interface AWEECShoppingAIGuideContentView : UIView <UICollectionViewDelegateFlowLayout, IGListAdapterDataSource, IGListDisplayDelegate, IGListAdapterDelegate, AWEECShoppingAIGuideContentSectionControllerDelegate, UIScrollViewDelegate, AWEECShoppingAIGuideAnswerBaseCellDelegate, AWEECShoppingAIGuidePageViewModelDelegate>

@property (weak, nonatomic) id<AWEECShoppingAIGuideContentViewDelegate> delegate;
@property (retain, nonatomic) AWEECShoppingAIGuideContext *context;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEECShoppingAIGuidePageViewModel *pageViewModel;
@property (retain, nonatomic) IGListAdapter *contentAdapter;
@property (retain, nonatomic) AWEECShoppingAIGuideCardSettingProvider *cardProvider;
@property (retain, nonatomic) NSMutableSet *animatedIndexPath;
@property (nonatomic) BOOL disableAutoScroll;
@property (nonatomic) double scrollBeginTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)listAdapter:(id)a0 willDisplayObject:(id)a1 atIndex:(long long)a2;
- (void)listAdapter:(id)a0 didEndDisplayingObject:(id)a1 atIndex:(long long)a2;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)updateFeedBackLikeStatusWithMessageID:(id)a0 isLike:(BOOL)a1;
- (void)cell:(id)a0 clickMoreInfoData:(id)a1;
- (void)cell:(id)a0 didUpdateHeight:(double)a1 callTrace:(id)a2;
- (void)didTriggerEvent:(id)a0 params:(id)a1 cell:(id)a2;
- (void)retryLastQuery;
- (void)didEndTextUpdating:(BOOL)a0 cell:(id)a1;
- (void)scrollToBottomAnimated:(BOOL)a0;
- (long long)currentSectionCount;
- (void)reloadDataWithAnim:(BOOL)a0 scrollToBottom:(BOOL)a1 reloadReason:(id)a2 completion:(id /* block */)a3;
- (void)expandPartialMoreInfoData:(id)a0 linkViewModel:(id)a1 expandViewIndex:(unsigned long long)a2 expandNum:(long long)a3;
- (void)expandAllMoreInfoDataWithMsgViewModel:(id)a0 clickMoreInfoData:(id)a1 expandViewIndex:(unsigned long long)a2;
- (BOOL)dataManagerIsWaitOrReceiving;
- (void)showPageStopButton:(BOOL)a0 cell:(id)a1;
- (void)showStopButton:(BOOL)a0 viewModel:(id)a1;
- (id)getDynamicSectionController;
- (void)updatePageTheme:(id)a0 requestEnd:(BOOL)a1;
- (void)didEndReloadData:(BOOL)a0;
- (void)didAppendWelcomeInfo:(BOOL)a0;
- (void)scrollToItemWithMessageUUID:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1 delegate:(id)a2 pageViewModel:(id)a3;
- (void)updateFeedBackStatusWithMessageID:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;
- (void)reloadDataWithCompletion:(id /* block */)a0;

@end
