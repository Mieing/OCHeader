@class MJShootComposingTemplateSinglePageViewModel, NSString, UICollectionView, NSIndexPath;
@protocol MJShootComposingTemplatePageViewDelegate;

@interface MJShootComposingTemplatePageView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootComposingTemplateSinglePageViewModelDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSString *downloadingTemplateID;
@property (nonatomic) BOOL isReloadingData;
@property (readonly, nonatomic) MJShootComposingTemplateSinglePageViewModel *viewModel;
@property (weak, nonatomic) id<MJShootComposingTemplatePageViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)commonInit;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)templateSinglePageViewModel:(id)a0 didFetchTemplateItems:(id)a1;
- (void)templateSinglePageViewModelDidFetchTemplateItemsFailed:(id)a0;
- (void)setDownloadingProgress:(float)a0 templateID:(id)a1;
- (void)setDownloadingSucceed:(BOOL)a0 templateID:(id)a1;
- (void)reloadData;
- (id)calcSelectedIndexPath;
- (void).cxx_destruct;

@end
