@class NSString;
@protocol IESLivePrivilegeRoomModule, IESLiveRedeemPanelRouter, IESLiveChargeRoomModule, IESLiveInsufficientRedeemInterface, IESLiveWalletManagerService, IESLiveRedeemEntranceRouter;

@interface IESLiveRedeemRoomModule : IESLiveModule <IESLiveRedeemRoomModule>

@property (retain, nonatomic) id<IESLiveRedeemEntranceRouter> redeemEntranceRouter;
@property (retain, nonatomic) id<IESLiveRedeemPanelRouter> redeemPanelRouter;
@property (retain, nonatomic) id<IESLivePrivilegeRoomModule> privilegeRoomModuleInterface;
@property (retain, nonatomic) id<IESLiveChargeRoomModule> chargeRoomModuleInterface;
@property (retain, nonatomic) id<IESLiveInsufficientRedeemInterface> insufficientRedeem;
@property (retain, nonatomic) id<IESLiveWalletManagerService> walletManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showRedeemPanelWithTrackParams:(id)a0 closeCallback:(id /* block */)a1;
- (void)updateEntranceWithGift:(id)a0 count:(long long)a1;
- (id)createRedeemEntrancehWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showGuestInfo:(BOOL)a1 viewFrameChanged:(id /* block */)a2;
- (BOOL)shouldShowRedeemEntrance;
- (double)redeemEntranceViewHeight;
- (id)insufficientRedeemInterface;
- (id)redeemToolBarInterface;
- (void).cxx_destruct;

@end
