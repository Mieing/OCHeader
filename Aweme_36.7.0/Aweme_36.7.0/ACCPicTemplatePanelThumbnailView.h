@class NSMutableDictionary, ACCPicTemplatePanelDataManager, UICollectionView, ACCPicTemplatePanelLoadingView, NSString;
@protocol ACCPicTemplatePanelThumbnailViewDelegate;

@interface ACCPicTemplatePanelThumbnailView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching>

@property (retain, nonatomic) UICollectionView *thumbnailListView;
@property (retain, nonatomic) ACCPicTemplatePanelLoadingView *loadingView;
@property (retain, nonatomic) ACCPicTemplatePanelDataManager *dataManager;
@property (retain, nonatomic) NSMutableDictionary *offSetCacheMap;
@property (weak, nonatomic) id<ACCPicTemplatePanelThumbnailViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSelected:(id)a0;
- (void)reloadTemplateView;
- (void)reloadVisibleTemplatesSelectedStatus;
- (id)templateModelWithIndexPath:(id)a0;
- (void)prefetchIconsWithIndexesIfNeeded:(id)a0;
- (void)scrollViewDidEndScrollWith:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithDataManager:(id)a0;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)isValidIndexPath:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;

@end
