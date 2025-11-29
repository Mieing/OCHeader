@class IESIMRecentShareContainerCellModel, IESIMRecentShareContainerCollectionView, NSString;

@interface IESIMRecentShareContainerCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, IESIMContactPickerContentCellProtocol>

@property (retain, nonatomic) IESIMRecentShareContainerCellModel *cellModel;
@property (retain, nonatomic) IESIMRecentShareContainerCollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIndentifier;
+ (double)cellHeight;

- (void)configWithCellModel:(id)a0;
- (void)__createCollectionView;
- (void)p_setupUIConstraints;
- (void)p_rereshCurrentBottomBadgeStatusWithCellModel:(id)a0;
- (void)p_acquireUserActive;
- (void)p_setCommonUIConfigWithCellModel:(id)a0;
- (void)p_refreshIMListDescTitle;
- (id)p_getSubtitleAttributesWithUIConfig:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
