@class IESECShopContext, NSString, IESECShopGoodsState;

@interface IESECShopClassificationGoodsEventHandler : NSObject <IESECShopGoodsStateAttachable>

@property (retain, nonatomic) IESECShopGoodsState *state;
@property (readonly, nonatomic) IESECShopContext *legacyShopContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attachState:(id)a0;
- (void)clickEcommerceStoreSortWithType:(id)a0 ascending:(long long)a1;
- (void)showSecondaryPage;
- (id)tracker;
- (void).cxx_destruct;

@end
