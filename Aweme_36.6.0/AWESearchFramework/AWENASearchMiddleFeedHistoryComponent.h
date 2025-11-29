@class UICollectionViewFlowLayout, NSString, UICollectionView;
@protocol CachalotRenderPipelineComponentViewModel, AWESearchMiddleProtocol;

@interface AWENASearchMiddleFeedHistoryComponent : UIView <AWESearchCachalotCardViewProtocol, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, CachalotMessageHandler>

@property (retain, nonatomic) UICollectionView *wordsCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> bindingViewModel;
@property (retain, nonatomic) id<AWESearchMiddleProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (double)p_heightWithWords:(id)a0;

- (void)componentPrepareForReuse;
- (void)handleMessage:(id)a0 callback:(id /* block */)a1;
- (id)p_getCurrentModel;
- (void)p_deleteHistoryWithContent:(id)a0;
- (void)p_handleHistoryClick:(id)a0;
- (void)p_reloadHistorys;
- (void)p_fetchUpdatedHistory:(id /* block */)a0;
- (void)p_insertHistoryAtTop:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
