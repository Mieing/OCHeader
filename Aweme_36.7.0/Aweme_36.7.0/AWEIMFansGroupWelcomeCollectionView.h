@class NSString, AWEIMWelcomeEditFooterCollectionReusableView;
@protocol AWEIMFansGroupWelcomeCollectionViewProtocol;

@interface AWEIMFansGroupWelcomeCollectionView : AWEIMBaseCollectionView

@property (copy, nonatomic) NSString *footerViewDefaultValue;
@property (retain, nonatomic) AWEIMWelcomeEditFooterCollectionReusableView *footerView;
@property (weak, nonatomic) id<AWEIMFansGroupWelcomeCollectionViewProtocol> welcomeDelegate;
@property (nonatomic) BOOL isShownInHalfScreen;
@property (nonatomic) BOOL useNewStyle;

- (BOOL)enableNewStyle;
- (void)registerWelcomeWithFooterViewDefaultValue:(id)a0 useSubtitle:(BOOL)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)titles;
- (id)subtitles;

@end
