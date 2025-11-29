@class UIView, MMWebImageView, MMUIButton, NSString, UIButton, UICollectionView, UILabel, FinderGetWindowProductProfileCardInfoResponse;

@interface WCFinderLiveCompleteShoppingView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) FinderGetWindowProductProfileCardInfoResponse *productInfo;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *shopButton;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) MMWebImageView *shopTagIcon;
@property (retain, nonatomic) UILabel *reputationTitleLabel;
@property (retain, nonatomic) UILabel *reputationValueLabel;
@property (retain, nonatomic) UILabel *reputationLevelLabel;
@property (retain, nonatomic) UIView *seperator;
@property (retain, nonatomic) UILabel *saleLabel;
@property (retain, nonatomic) UIButton *internalClickButton;
@property (copy, nonatomic) id /* block */ onJumpToShopPage;
@property (copy, nonatomic) id /* block */ onJumpToDetailPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowShoppingViewWithProductInfo:(id)a0;

- (BOOL)useNewStyle;
- (BOOL)cannotClickCell;
- (id)init;
- (void)updateWithProductInfo:(id)a0;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)initViewsIfNeeded;
- (void)reloadContents;
- (double)calculateCollectionViewCellLen;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onShoppingButtonTapped;
- (void).cxx_destruct;

@end
