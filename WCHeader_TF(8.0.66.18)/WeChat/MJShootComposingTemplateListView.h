@class MJShootComposingTemplatePanelViewModel, NSString, UICollectionView, MJCircleProgressView, UIView, UILabel;
@protocol MJShootComposingTemplateListViewDelegate;

@interface MJShootComposingTemplateListView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootComposingTemplatePanelViewModelDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *selectedBox;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long itemAtCenterPoint;
@property (retain, nonatomic) UIView *progressBGView;
@property (retain, nonatomic) MJCircleProgressView *progressView;
@property (retain, nonatomic) MJShootComposingTemplatePanelViewModel *viewModel;
@property (weak, nonatomic) id<MJShootComposingTemplateListViewDelegate> delegate;
@property (nonatomic) BOOL loadMoreTemplateDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (void)updateTemplateLoadProgress:(float)a0 templateID:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)reloadData;
- (id)centralIndexPath;
- (void)notifyPassThroughAndFeedback;
- (void)didSelectedItemAtIndexPath:(id)a0 isUserClicked:(BOOL)a1;
- (id)calcSelectedIndexPath;
- (unsigned long long)currentSelectedIndex;
- (id)currentSelectedTemplateItem;
- (id)templateItemAtIndex:(unsigned long long)a0;
- (id)templateItemWithTemplateID:(id)a0;
- (void)templatePanelViewModelDidFetchItemFailed:(id)a0;
- (void)templatePanelViewModelDidFetchItemSucceed:(id)a0 item:(id)a1;
- (void)templatePanelViewModelDidFetchItemsForDefaultTabFailed:(id)a0;
- (void)templatePanelViewModel:(id)a0 didFetchItemsForDefaultTab:(id)a1 firstTime:(BOOL)a2;
- (void)templatePanelViewModelDidFetchItemsForDefaultTabSucceed:(id)a0 items:(id)a1;
- (void)templatePanelViewModelDidFetchEmptyItemsForDefaultTabSucceed:(id)a0;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)showLoadingUIIfNeeded;
- (void)removeLoadingUI;
- (void)impactFeedback;
- (void).cxx_destruct;

@end
