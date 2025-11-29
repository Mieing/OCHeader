@class NSString, IESECShopProductsHybridContext;

@interface IESECShopProductsListStyleChangedActionTarget : NSObject <IESECShopProductsListStyleChangedAction> {
    IESECShopProductsHybridContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listStyleShouldChange:(unsigned long long)a0;
- (void)handleListStyleChanged:(unsigned long long)a0;
- (void)handleListStyleDelayChanged:(unsigned long long)a0;
- (id)initWithHybridContext:(id)a0;
- (void).cxx_destruct;

@end
