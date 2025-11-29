@class NSArray, UICollectionView, AWEGeneralSearchModel, UILabel, AWEWordSourceModel, NSString;
@protocol AWESearchClickRecomViewDelegate;

@interface AWESearchWaterfallClickRecomWindVaneView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWESearchClickRecomProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) AWEWordSourceModel *recommWordsModel;
@property (weak, nonatomic) id<AWESearchClickRecomViewDelegate> delegate;
@property (copy, nonatomic) NSArray *wordsArray;
@property (copy, nonatomic) NSString *presearchID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightOfRecomView:(id)a0 cardWidth:(double)a1;
+ (double)heightOfTitleLabel;

- (void)updateRecomViewWithModel:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithDelegate:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })sizeWithText:(id)a0;

@end
