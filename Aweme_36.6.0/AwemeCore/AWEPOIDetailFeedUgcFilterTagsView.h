@class AWEPOIDetailSkinConfig, NSArray, UICollectionView, AWEPOIUgcButtonSkinConfig, AWEPOIDetailConstData, AWEPOIFeedUgcHeaderModel, NSString;
@protocol AWEPOIDetailFeedUgcFilterTagsViewDelegate;

@interface AWEPOIDetailFeedUgcFilterTagsView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *ugcTags;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long state;
@property (retain, nonatomic) AWEPOIDetailSkinConfig *skinConfig;
@property (retain, nonatomic) AWEPOIUgcButtonSkinConfig *buttonSkinConfig;
@property (weak, nonatomic) id<AWEPOIDetailFeedUgcFilterTagsViewDelegate> delegate;
@property (nonatomic) BOOL isFromIsolated;
@property (retain, nonatomic) AWEPOIDetailConstData *constData;
@property (retain, nonatomic) AWEPOIFeedUgcHeaderModel *headerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithTag:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInset;

- (void)updateSkinConfig:(id)a0;
- (id)trackingParamsWithModel:(id)a0;
- (void)removeAnimations;
- (void)scrollItemToCenterWithCollectionView:(id)a0 indexPath:(id)a1 animated:(BOOL)a2;
- (id)initWithFrameOrigin:(struct CGPoint { double x0; double x1; })a0 ugcTags:(id)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)showWithCompletion:(id /* block */)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)hide;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)show;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInset;
- (void)setupUI;
- (void)hideWithCompletion:(id /* block */)a0;

@end
