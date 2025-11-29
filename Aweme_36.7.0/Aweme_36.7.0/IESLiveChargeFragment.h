@class NSString, IESLiveChargeViewModel, HTSEventContext, UIView, NSNumber;
@protocol IESLiveRoomService;

@interface IESLiveChargeFragment : IESLiveRoomComponent <IESHYControllerDelegate, IESLiveChargeProvider, HTSLiveGiftActions, IESLiveIMMessageSubscriber, HTSLiveMessageSubscriber, IESLiveAutoRotateAction, IESLiveChargeRouter>

@property (nonatomic) long long orientation;
@property (weak, nonatomic) UIView *chargeView;
@property (weak, nonatomic) IESLiveChargeViewModel *chargeViewModel;
@property (retain, nonatomic) NSNumber *enableDiamondsActionCache;
@property (nonatomic) BOOL hasReqChargeApiAfterEnterRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)iesHYControllerDidFinishLoad:(id)a0;
- (void)iesHYControllerDidDismiss:(id)a0;
- (void)handleOrientationChanged:(long long)a0;
- (void)hideChargePanel;
- (void)updateChargeView;
- (void)showChargePanelWithUserInfo:(id)a0;
- (void)showChargePanelWithUserInfo:(id)a0 withFirstPayParams:(id)a1 successCallBack:(id /* block */)a2;
- (void)showChargePanelWithUserInfo:(id)a0 withFirstPayParams:(id)a1 successCallBack:(id /* block */)a2 cloaseCallBack:(id /* block */)a3;
- (void)showChargePanelWithUserInfo:(id)a0 withFirstPayParams:(id)a1 successCallBack:(id /* block */)a2 cloaseCallBack:(id /* block */)a3 targetDiamond:(long long)a4;
- (void)hideCustomChargeView;
- (void)giftViewWillShow;
- (void)forceUpdateToPortraitWith:(id /* block */)a0;
- (void)p_showChargeViewWithUserInfo:(id)a0 withFirstPayParams:(id)a1 successCallBack:(id /* block */)a2 closeCallBack:(id /* block */)a3 targetDiamond:(long long)a4;
- (id)p_buildChargeParamsWithUserInfo:(id)a0 firstPayParams:(id)a1;
- (BOOL)enableDiamondsAction;
- (void)p_createLiveViewWithTrackParams:(id)a0 successCallBack:(id /* block */)a1 closeCallBack:(id /* block */)a2 targetDiamond:(long long)a3;
- (void)pr_requestChargeInfo;
- (BOOL)p_forceUpdateToPortraitIfNeeded:(id /* block */)a0;
- (id)p_openHybridURL:(id)a0 fromInside:(BOOL)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
