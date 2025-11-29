@class IESECShopGoodsCardViewModel, NSString, IESECShopProductsHybridContext, UIView, NSMutableDictionary, IESECShopSlideShowContainer;
@protocol IESECShopGoodsCellProtocol;

@interface IESECShopProductsProductCell : UICollectionViewCell <IESECStoreNewFlexGoodsCellDelegate> {
    NSMutableDictionary *_views;
    struct optional<IESECShopProductsProductCellType> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _currentType;
    IESECShopGoodsCardViewModel *_viewModel;
    BOOL _animated;
}

@property (weak, nonatomic) IESECShopProductsHybridContext *context;
@property (readonly, nonatomic) IESECShopGoodsCardViewModel *viewModel;
@property (readonly, nonatomic) UIView<IESECShopGoodsCellProtocol> *currentContentCell;
@property (readonly, nonatomic) IESECShopSlideShowContainer *slideshowContainer;
@property (copy, nonatomic) id /* block */ addToCartAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForType:(unsigned long long)a0;
- (void)handleAddToCartButtonClick:(id)a0 cartButton:(id)a1;
- (BOOL)setCurrentCellType:(unsigned long long)a0;
- (void)updateView:(id)a0 forType:(unsigned long long)a1;
- (void)updateCurrentCellWithModel:(id)a0;
- (void)doAnimationIfNeeded;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)currentCell;

@end
