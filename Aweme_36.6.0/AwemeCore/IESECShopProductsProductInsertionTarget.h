@class NSString, IESECShopProductsHybridContext, IESECListKitItemDataModel;

@interface IESECShopProductsProductInsertionTarget : NSObject <IESECShopProductsProductInsertionAction> {
    IESECShopProductsHybridContext *_context;
    IESECListKitItemDataModel *_anchorItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAnchorItem:(id)a0;
- (void)decideItemInsertion:(id)a0 callback:(id /* block */)a1;
- (void)insertItemWithAnimation:(id)a0 andAppendRemainingItems:(BOOL)a1;
- (id)initWithHybridContext:(id)a0;
- (long long)targetInsertIndex;
- (id)productSection:(id)a0;
- (id)insertedItem:(id)a0;
- (BOOL)retreatDecideInsertItem:(id)a0 types:(id)a1 distance:(unsigned long long)a2;
- (void)clientAiDecideInsertItem:(id)a0 businessName:(id)a1 inputParams:(id)a2 callback:(id /* block */)a3;
- (id)appendedItems:(id)a0;
- (void).cxx_destruct;

@end
