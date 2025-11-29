@class AWEPOIUgcButtonSkinConfig, NSMutableDictionary, UICollectionView, AWEPOIDetailConstData, NSString, AWEPOIFeedUgcHeaderModel;
@protocol AWEPOIDetailFeedUgcCustomerSaysCellDelegate;

@interface AWEPOIDetailFeedUgcImpressionTagsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEPOIFeedUgcHeaderModel *model;
@property (weak, nonatomic) id<AWEPOIDetailFeedUgcCustomerSaysCellDelegate> delegate;
@property (nonatomic) BOOL ugcTagAB;
@property (nonatomic) BOOL isHitCOITestAndShowInPoiPage;
@property (nonatomic) BOOL isFromIsolated;
@property (retain, nonatomic) AWEPOIDetailConstData *constData;
@property (retain, nonatomic) NSMutableDictionary *modularParams;
@property (retain, nonatomic) AWEPOIUgcButtonSkinConfig *buttonSkinConfig;
@property (copy, nonatomic) id /* block */ didSelectTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)tagsHeightWithModel:(id)a0 ugcTagAB:(BOOL)a1;

- (id)trackingParamsWithModel:(id)a0;
- (BOOL)shouldRecognizerDidSelectItemWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
