@class NSArray, UICollectionView, AWENewVideoCoverEditTemplateViewModel, UICollectionViewFlowLayout, UIView, NSString;
@protocol ACCLoadingViewProtocol, AWEVideoCoverImageHistoryContentCellDelegate;

@interface AWEVideoCoverImageHistoryContentCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *imageTemplateCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) AWENewVideoCoverEditTemplateViewModel *viewModel;
@property (copy, nonatomic) NSArray *templateList;
@property (copy, nonatomic) NSArray *recommendTemplateList;
@property (nonatomic) BOOL disableScrollNext;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingIndicator;
@property (retain, nonatomic) UIView *networkErrorView;
@property (weak, nonatomic) id<AWEVideoCoverImageHistoryContentCellDelegate> delegate;
@property (nonatomic) long long section;
@property (copy, nonatomic) NSString *categoryName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_showLoading;
- (void)p_showError;
- (void)p_setupConstraint;
- (void)networkErrorButtonClicked:(id)a0;
- (BOOL)isCoverToolsExperienceOpt1;
- (BOOL)isSelectedHistory;
- (id)currentSelectIndexPath;
- (void)updateWithTemplateList:(id)a0 viewModel:(id)a1;
- (void)p_showNormal;
- (void)p_hiddenLoading;
- (void)p_setupLoading;
- (void)p_setupNetworkError;
- (double)offsetForNextAction;
- (void)p_setupUI;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)indexPathsForVisibleItems;
- (void)loadData;

@end
