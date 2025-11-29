@class NSString, UICollectionView, AWESearchRelatedPOIModel, UILabel, AWEAwemeModel, UICollectionViewFlowLayout;

@interface AWESearchMentionedStoreView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWESearchRelatedPOIModel *model;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic) double titleLabelWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (double)titleLabelWidthWithText:(id)a0;
- (double)itemWidthWithModel:(id)a0;
- (void)trackViewDisplay;
- (void)updateWithAwemeModel:(id)a0 index:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })iconSizeWithModel:(id)a0;
- (id)trackBaseParams;
- (void)trackWordsShowWithIndexPath:(id)a0;
- (void)trackWordsClickWithIndexPath:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)setupUI;

@end
