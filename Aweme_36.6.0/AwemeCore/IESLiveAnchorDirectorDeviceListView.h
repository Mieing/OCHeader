@class NSString, UICollectionView, DeviceViewListResponse_Data, UILabel, DeviceViewInfo, UIButton;
@protocol IESLiveAnchorDirectorDeviceListViewDelegate;

@interface IESLiveAnchorDirectorDeviceListView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *disConnectButton;
@property (retain, nonatomic) UICollectionView *deviceCollectionView;
@property (retain, nonatomic) UIButton *switchButton;
@property (retain, nonatomic) DeviceViewListResponse_Data *deviceViewData;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) DeviceViewInfo *anchorDeviceInfo;
@property (weak, nonatomic) id<IESLiveAnchorDirectorDeviceListViewDelegate> delegate;
@property (nonatomic) BOOL isFromToolBarItemClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDeviceInfo:(id)a0 anchorDeviceInfo:(id)a1;
- (void)initSelectedIndex;
- (void)updateDisConnectButton;
- (void)disConnectDevice;
- (void)switchConnectDevice:(id)a0;
- (BOOL)isSelectedAnchorView;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupCollectionView;
- (void)setupUI;

@end
