@class UIPageControl, NSString, AWEIMExpandCollectionListModel, AWEIMExpandCollectionView, UICollectionViewFlowLayout, AWEIMExpandCollectionAutoScrollComponent;

@interface AWEEmojiStoreRecommendBannerTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) AWEIMExpandCollectionView *collectionView;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) AWEIMExpandCollectionListModel *listModel;
@property (retain, nonatomic) AWEIMExpandCollectionAutoScrollComponent *autoScrollComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithModel:(id)a0;
- (void)resetToMiddelNeedLayout:(BOOL)a0;
- (void)p_updateSize;
- (void)resetToMiddel;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
