@interface IESLiveDressSwiftFragment : IESLiveRoomComponent <IESLivePrivilegeBuyDressInterface> {
    void /* unknown type, empty encoding */ store;
}

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)buyDressFormGiftPanel:(id)a0 trackParams:(id)a1 rechargeBlock:(id /* block */)a2 buyCompletion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
