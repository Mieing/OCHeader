@interface IESLiveRevenueChargeSwiftFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveAutoRotateAction, HTSLiveGiftActions, IESLiveChargeRouter> {
    void /* unknown type, empty encoding */ chargeView;
    void /* unknown type, empty encoding */ chargeViewModel;
    void /* unknown type, empty encoding */ orientation;
}

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)messageReceived:(id)a0;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)giftViewWillShow;
- (void)hideChargePanel;
- (void)updateChargeView;
- (void)showChargePanelWithUserInfo:(id)a0;
- (void)showChargePanelWithUserInfo:(id)a0 withFirstPayParams:(id)a1 successCallBack:(id /* block */)a2;
- (void)showChargePanelWithUserInfo:(id)a0 withFirstPayParams:(id)a1 successCallBack:(id /* block */)a2 cloaseCallBack:(id /* block */)a3;
- (void)showChargePanelWithUserInfo:(id)a0 withFirstPayParams:(id)a1 successCallBack:(id /* block */)a2 cloaseCallBack:(id /* block */)a3 targetDiamond:(long long)a4;
- (void)hideCustomChargeView;
- (void)componentBindService;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentOrientationTransitioning:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
