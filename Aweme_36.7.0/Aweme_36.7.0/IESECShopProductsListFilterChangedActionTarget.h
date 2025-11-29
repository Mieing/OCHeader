@class NSString, IESECShopProductsHybridContext;

@interface IESECShopProductsListFilterChangedActionTarget : NSObject <IESECShopProductsListFilterChangedAction> {
    IESECShopProductsHybridContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listFilterDidChangeWithItem:(id)a0 order:(unsigned long long)a1;
- (void)listFilterDidChangeActivityFilter:(id)a0;
- (void)listFilterDidChangeSelectParams:(id)a0;
- (void)listFilterDidChangePickType:(long long)a0;
- (void)listFilterDidChangePromotionFilter:(id)a0;
- (void)reloadHybridList;
- (id)initWithHybridContext:(id)a0;
- (void).cxx_destruct;

@end
