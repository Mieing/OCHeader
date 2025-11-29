@interface IESECShopSwift.ShopHybridPageSliceServiceImpl : IESECShopSwift.ShopBaseService <IESECSliceXEventForwardDelegate, IESECShopHybridPageSliceService> {
    void /* unknown type, empty encoding */ BizIdentify;
    void /* unknown type, empty encoding */ registeredStateMap;
    void /* unknown type, empty encoding */ registeredControllerMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_configService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sliceXConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sliceXInstance;
}

- (void)triggerSliceXEvent:(id)a0;
- (id)getElementViewInSliceXView:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)registerBizObjectWithKey:(id)a0 bizObj:(id)a1;
- (id)createSliceXView:(id)a0 completion:(id /* block */)a1;
- (void)bindSliceXView:(id)a0 dataSource:(id)a1 uniqueID:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3 completion:(id /* block */)a4;
- (void)bindSLICardController:(id)a0;
- (id)getSLICardUniqueID:(id)a0;
- (id)getSLICardControllerWithUniqueID:(id)a0;
- (id)getSliceItemStates;
- (void)updateSliceItemState:(id)a0 withValue:(id)a1;
- (void)updateSliceItemState:(id)a0 withValue:(id)a1 uniqueId:(id)a2;
- (void).cxx_destruct;

@end
