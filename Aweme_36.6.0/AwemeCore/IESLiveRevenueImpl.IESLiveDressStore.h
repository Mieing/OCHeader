@interface IESLiveRevenueImpl.IESLiveDressStore : NSObject <HTSLiveMessageSubscriber, IESLivePrivilegeBuyDressInterface, PuzzleKitViewLifeCycleProtocol> {
    void /* unknown type, empty encoding */ room;
    void /* unknown type, empty encoding */ trackContext;
    void /* unknown type, empty encoding */ componentContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_buyDressApi;
    void /* unknown type, empty encoding */ $__lazy_storage_$_privilegeAdapter;
}

- (void)didSetAttachingDIContext;
- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (void)buyDressFormGiftPanel:(id)a0 trackParams:(id)a1 rechargeBlock:(id /* block */)a2 buyCompletion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
