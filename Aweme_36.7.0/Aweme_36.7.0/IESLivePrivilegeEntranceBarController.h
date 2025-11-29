@class IESLivePrivilegeEntranceBarViewModel, IESLivePrivilegeEntranceBarView, NSString;

@interface IESLivePrivilegeEntranceBarController : IESLiveCubeController <IESLivePrivilegeModulePrivilegeEntranceBarInterface>

@property (retain, nonatomic) IESLivePrivilegeEntranceBarView *entranceBar;
@property (retain, nonatomic) IESLivePrivilegeEntranceBarViewModel *entranceBarViewModel;
@property (nonatomic) BOOL giftPanelNewArchitecture;
@property (nonatomic) BOOL needLoadLynxViewWhenInit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didGiveGiftWithResponse:(id)a0;
- (void)didGiveGiftFailed:(id)a0 error:(id)a1;
- (void)giftViewWillShow;
- (void)giftViewWillDismiss;
- (void)giftPageTypeDidChanged:(long long)a0;
- (void)controllerActived;
- (void)didGiveAssetWithResponse:(id)a0;
- (id)currentEntranceBarInfo;
- (BOOL)shouldShowPrivilegeEntranceBar;
- (void)entranceBarWillDisappear;
- (id)createPrivilegeEntranceBarWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 giftPanelNewArchitecture:(BOOL)a1 disableLynxForDynamicPanel:(BOOL)a2;
- (id)payGradeSubject;
- (void)updateLocalPrivilgeBarStrategyWithTouchPositionStr:(id)a0 completion:(id /* block */)a1;
- (void)updateEntranceBarWithSelectedGiftDiamond:(id)a0;
- (void)updateEntranceBarWithSelectedGift:(long long)a0 giftName:(id)a1 giftPrice:(long long)a2 count:(long long)a3 isNormalGift:(BOOL)a4 currentUserDiamond:(long long)a5;
- (void).cxx_destruct;

@end
