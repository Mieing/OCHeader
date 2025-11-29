@class NSString, AWEPublishImageAlbumLargePreviewViewConfig, UICollectionView, UIView;
@protocol AWEPublishImageAlbumLargePreviewViewDelegate, AWEPublishImageAlbumLargePreviewViewDataSource;

@interface AWEPublishImageAlbumLargePreviewView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWEPublishImageAlbumLargePreviewViewConfig *config;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEPublishImageAlbumLargePreviewViewDelegate> delegate;
@property (weak, nonatomic) id<AWEPublishImageAlbumLargePreviewViewDataSource> dataSource;
@property (retain, nonatomic) UIView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (id)buildPreviewLayoutWithConfig:(id)a0;
- (id)buildCollectionViewWithLayout:(id)a0 cellClass:(Class)a1 identifier:(id)a2;
- (void)reloadItemAtIndexPath:(id)a0;
- (void)layoutcollectionView;
- (id)buildBackgroundContainerView;
- (void)showInputStyle:(BOOL)a0 animation:(BOOL)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;

@end
