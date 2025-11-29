@class IESECListKitListUpdater, NSString, IESECShopProductsProductCellProvider, UICollectionViewCell, IESECListKitItemDataModel;

@interface IESECShopProductsProductCardController : NSObject <IESECListKitCellControllerProtocol, IESECShopProductsVideoPlayableController, IESECShopProductsAddCartAnimatableController, IESECShopGoodsCardViewModelDelegate> {
    struct CGSize { double width; double height; } _itemSize;
    IESECShopProductsProductCellProvider *_cellProvider;
}

@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)configCell;
- (id)videoPlayerContainer;
- (double)heightForModel:(id)a0 itemWidth:(double)a1;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)clickSkuItem:(id)a0 skuIdx:(long long)a1;
- (void)tagListShow:(id)a0 goodsModel:(id)a1;
- (void)clickTagList:(id)a0 goodsModel:(id)a1;
- (id)clickExtraParams:(id)a0;
- (id)productCoverView;
- (id)currentSectionModel;
- (id)productCoverImage;
- (unsigned long long)productCellType;
- (void)handleAddCartAction:(id)a0 cartButton:(id)a1 index:(long long)a2;
- (void)handleProductCardDidClick:(id)a0;
- (id)configProductViewModel;
- (void)productWillDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (id)overrideTabNameSecond:(id)a0;
- (id)overrideModuleForm;
- (id)overrideModuleName:(id)a0;
- (void)productDidSelectAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)cellProvider;

@end
