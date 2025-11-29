@class AWEVideoCoverEvaluateModel, NSString, UICollectionView, DUXButton, UIView;
@protocol AWEEvaluatePanelViewDelegate;

@interface AWEVideoCoverEvaluatePanelContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, CollectionViewLowCellDelegate>

@property (retain, nonatomic) DUXButton *nextButton;
@property (retain, nonatomic) UIView *nextButtonBG;
@property (nonatomic) BOOL isLowListScrolled;
@property (retain, nonatomic) UICollectionView *contentView;
@property (retain, nonatomic) AWEVideoCoverEvaluateModel *evaluateModel;
@property (weak, nonatomic) id<AWEEvaluatePanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (void)initSubViews;
- (void)configSubViews;
- (void)updateEvaluateStatus:(id)a0;
- (BOOL)isEditPageEvaluate;
- (void)nextButtonClick;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 evaluateModel:(id)a1;
- (void)panelDismissed:(BOOL)a0;
- (void)setViewOngoing;
- (void)setViewFail;
- (void)setViewExcellent;
- (void)setViewNormal;
- (void)setViewLow;
- (void)cellArrowClickedAtIndexPath:(id)a0;
- (BOOL)isShowSuggest;
- (long long)getListSize;
- (double)getHeightForString:(id)a0 withFont:(id)a1 andWidth:(double)a2;
- (struct CGSize { double x0; double x1; })getLowCoverListCellSize:(id)a0;
- (struct CGSize { double x0; double x1; })getLowCellSize:(id)a0;
- (struct CGSize { double x0; double x1; })getNormalCellSize:(id)a0;
- (id)getNormalCell:(id)a0 indexPath:(id)a1;
- (id)getLowCell:(id)a0 indexPaht:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;

@end
