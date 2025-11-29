@class NSArray, UICollectionView, AWENewVideoCoverEditTemplateViewModel, UICollectionViewFlowLayout, NSString;
@protocol AWEVideoCoverImageTemplateListContentCellDelegate;

@interface AWEVideoCoverImageTemplateListContentCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *imageTemplateCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) AWENewVideoCoverEditTemplateViewModel *viewModel;
@property (copy, nonatomic) NSArray *templateList;
@property (nonatomic) BOOL disableScrollNext;
@property (weak, nonatomic) id<AWEVideoCoverImageTemplateListContentCellDelegate> delegate;
@property (nonatomic) long long section;
@property (copy, nonatomic) NSString *categoryName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupConstraint;
- (BOOL)isCoverToolsExperienceOpt1;
- (id)currentSelectIndexPath;
- (void)updateWithTemplateList:(id)a0 viewModel:(id)a1;
- (double)offsetForNextAction;
- (void)p_setupUI;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)indexPathsForVisibleItems;

@end
