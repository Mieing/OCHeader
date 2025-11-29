@class NSString, UICollectionView, UIImageView, UILabel, UIView, AWEIMEnterpriseModeDataBannerViewModel;
@protocol IESIMPopoverProtocol, AWEIMEnterpriseModeExpandedDataBannerViewDelegate;

@interface AWEIMEnterpriseModeExpandedDataBannerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEIMEnterpriseModeExpandedDataBannerViewCollectionViewCellDelegate, IESIMPopoverDelegate>

@property (retain, nonatomic) UIView *bannerContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *divider;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *jumpIcon;
@property (retain, nonatomic) AWEIMEnterpriseModeDataBannerViewModel *viewModel;
@property (retain, nonatomic) UIView<IESIMPopoverProtocol> *popover;
@property (weak, nonatomic) id<AWEIMEnterpriseModeExpandedDataBannerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (void)__setupUI;
- (void)showPopoverTipsForCell:(id)a0 completion:(id /* block */)a1;
- (void)__bind;
- (void)__didTapOnHeaderArea;
- (void)__didTapOnBodyArea;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
