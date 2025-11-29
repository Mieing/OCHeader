@interface IESLiveRevenueModuleABInterface : NSObject

+ (id)chargeInterfaceWithDiContext:(id)a0;
+ (id)insufficientRedeemInterfaceWithDiContext:(id)a0;
+ (id)fansGroupInterfaceWithDiContext:(id)a0;
+ (BOOL)enableRankNewRightsWithDiContext:(id)a0;
+ (id)rankNewRightsDataWithDiContext:(id)a0;
+ (id)privilegeDanmakuInterfaceWithDiContext:(id)a0;
+ (id)rankListInterfaceWithDiContext:(id)a0;
+ (id)privilegeEntranceInterfaceWithDiContext:(id)a0;
+ (id)portalInterfaceWithDiContext:(id)a0;
+ (void)showAudienceRankListXWithDiContext:(id)a0;
+ (id)privilegeDressPreviewInterfaceWithDiContext:(id)a0;
+ (BOOL)isUserEntryView:(id)a0 withDiContext:(id)a1;
+ (id)taskPanelManagerWithDiContext:(id)a0;
+ (id)subscribeVIPInterfaceWithDiContext:(id)a0;
+ (id)taskCenterInterfaceWithDiContext:(id)a0;
+ (id)redEnvelopeInterfaceWithDiContext:(id)a0;
+ (BOOL)shouldShowRedeemEntranceWithDiContext:(id)a0;
+ (double)redeemEntranceViewHeightWithDiContext:(id)a0;
+ (id)createRedeemEntrancehWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showGuestInfo:(BOOL)a1 viewFrameChanged:(id /* block */)a2 diContext:(id)a3;
+ (id)privilegeBuyDressInterfaceWithDiContext:(id)a0;
+ (id)petRabbitInterfaceWithDiContext:(id)a0;
+ (void)updateEntranceWithGift:(id)a0 count:(long long)a1 diContext:(id)a2;
+ (void)showRedeemPanelWithTrackParams:(id)a0 closeCallback:(id /* block */)a1 diContext:(id)a2;
+ (id)redeemInterfaceWithDiContext:(id)a0;
+ (id)invisibleInterfaceWithDiContext:(id)a0;
+ (id)redeemToolBarInterfaceWithDiContext:(id)a0;

@end
