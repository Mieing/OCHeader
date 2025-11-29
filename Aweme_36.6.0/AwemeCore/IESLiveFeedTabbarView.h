@class CAGradientLayer, TabResponse, UICollectionView, NSString;
@protocol IESLiveFeedTabbarViewDelegate;

@interface IESLiveFeedTabbarView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) TabResponse *tabModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) BOOL isHorizontalStyle;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<IESLiveFeedTabbarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTabModel:(id)a0;
- (void)reloadTabbarView;
- (id)generateTextWithIndex:(long long)a0;
- (double)widthForCollectionView;
- (struct CGSize { double x0; double x1; })sizeForItemInIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })titleSizeForFont:(id)a0 text:(id)a1 height:(double)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)setupViews;

@end
