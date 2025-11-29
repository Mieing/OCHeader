@class AWETeenAlbumDataController, UICollectionView, AWETeenExtraParamModel, UILabel, NSString, UIButton;

@interface AWETeenLandscapeAlbumRecommendPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double itemWidth;
@property (retain, nonatomic) UILabel *footerLabel;
@property (retain, nonatomic) AWETeenExtraParamModel *extra;
@property (nonatomic) double collectionViewtMargin;
@property (nonatomic) double padTopMargin;
@property (nonatomic) double backButtonLeftMargin;
@property (copy, nonatomic) id /* block */ backBtnClick;
@property (nonatomic) BOOL isIPAlbum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForFooterInSection:(long long)a2;
- (void)backButtonClick;
- (void)p_setupBind;
- (id)initWithDataController:(id)a0 extra:(id)a1;
- (double)getLabelHeightWithFixedWidth:(double)a0 andFixedFont:(id)a1 andContent:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 widthForFooterInSection:(long long)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;

@end
