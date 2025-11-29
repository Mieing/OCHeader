@class UIPageControl, NSString, AWEIMCollectionListModel, UICollectionView;

@interface AWEIMEmoticonReplyPanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (nonatomic) unsigned long long expansion;
@property (retain, nonatomic) AWEIMCollectionListModel *listModel;
@property (copy, nonatomic) id /* block */ didSelectViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)panelViewHeight;
+ (id)defaultPanel;

- (id)firstIndexPathForVisibleRect;
- (void)didChangePage;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;

@end
