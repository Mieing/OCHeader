@class IESLivePrivilegeEntranceWealthViewModel, IESLivePrivilegeEntranceWealthView, NSString;

@interface IESLivePrivilegeEntranceWealthController : IESLiveCubeController <IESLivePrivilegeModulePrivilegeEntranceWealthInterface>

@property (retain, nonatomic) IESLivePrivilegeEntranceWealthViewModel *wealthViewModel;
@property (retain, nonatomic) IESLivePrivilegeEntranceWealthView *wealthView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)giftViewWillDismiss;
- (void)controllerActived;
- (void)updateEntranceWealthWithSelectedGift:(id)a0 giftPrice:(long long)a1 count:(long long)a2 isNormalGift:(BOOL)a3 currentUserDiamond:(long long)a4;
- (double)wealthViewHeight;
- (id)createPrivilegeEntranceWealthWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showGuestInfo:(BOOL)a1 viewFrameChanged:(id /* block */)a2;
- (BOOL)shouldShowPrivilegeEntranceWealth;
- (void).cxx_destruct;

@end
