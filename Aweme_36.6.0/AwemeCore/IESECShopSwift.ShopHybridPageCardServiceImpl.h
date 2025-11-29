@interface IESECShopSwift.ShopHybridPageCardServiceImpl : IESECShopSwift.ShopBaseService <IESECListCardsContextDelegate, IESECLynxCardDelegate> {
    void /* unknown type, empty encoding */ cardModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageCard;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eventService;
    void /* unknown type, empty encoding */ jsRTReady;
    void /* unknown type, empty encoding */ penddingEvents;
    void /* unknown type, empty encoding */ ecExtraGlobalProps;
}

- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (void)viewDidConstructJSRuntime:(id)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)lynxCard:(id)a0 didFinishLoadWithURL:(id)a1;
- (void).cxx_destruct;

@end
