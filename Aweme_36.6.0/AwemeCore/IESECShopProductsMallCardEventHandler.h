@class IESECShopProductsHybridContext, UIView;

@interface IESECShopProductsMallCardEventHandler : NSObject {
    IESECShopProductsHybridContext *_context;
}

@property (weak, nonatomic) UIView *host;

- (id)initWithHybridContext:(id)a0;
- (void)handleProductClick:(id)a0 cell:(id)a1 atIndex:(long long)a2;
- (void)handleMallEntranceClickWithEvent:(id)a0 isEntranceButton:(BOOL)a1;
- (void)handleProductDidDisplay:(id)a0 cell:(id)a1 atIndex:(long long)a2;
- (void)sendProductEvent:(id)a0 product:(id)a1 cell:(id)a2 atIndex:(long long)a3 enableOnce:(BOOL)a4;
- (id)productTrackParams;
- (void).cxx_destruct;

@end
