@class UIView, IESECXBridgeEventSubscriber, NSString, IESECTakeoutShopLiveInfo, NSDictionary, BDImageView, IESECServiceProxy, UILabel;
@protocol IESECLivePlayer, IESECBlenderHybridAtomicAbilityHandler;

@interface IESECTakeoutShopLivePlayer : IESECBlenderBlockBaseView <AWELiveRoomMessage, IESECMessageSubscriber, IESECLivePlayerViewDelegate, IESECTakeoutShopListPlayer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *liveInfoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BDImageView *muteIconView;
@property (nonatomic) unsigned long long playerState;
@property (retain, nonatomic) NSDictionary *serviceConfig;
@property (retain, nonatomic) NSDictionary *storeInfo;
@property (retain, nonatomic) IESECXBridgeEventSubscriber *livePendantOpacitySub;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderHybridAtomicAbilityHandler> *hydridAtomicAbilityHandler;
@property (nonatomic) BOOL shouldResumeState;
@property (nonatomic) BOOL enableSubscribeMsg;
@property (nonatomic) BOOL storeIsClose;
@property (retain, nonatomic) NSString *nodeFieldData;
@property (nonatomic) BOOL disableSubscribeEvent;
@property (nonatomic) BOOL leavePage;
@property (retain, nonatomic) UIView<IESECLivePlayer> *player;
@property (retain, nonatomic) IESECTakeoutShopLiveInfo *liveInfo;
@property (retain, nonatomic) BDImageView *liveCover;
@property (nonatomic) BOOL liveRoomTransferring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audienceQuitAllRoomWithSlideVC:(id)a0 player:(id)a1 context:(id)a2;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)bindEvent;
- (void)setMuteIcon:(BOOL)a0;
- (void)registerMessage;
- (void)unregisterMessage;
- (void)transitionTransferToURLString:(id)a0;
- (void)didAppear:(BOOL)a0;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)didDisappear:(BOOL)a0;
- (void)globalInfoChanged:(id)a0;
- (double)getPlayerHeight;
- (void)setupLiveInfoView;
- (void)subscribeLiveCardMessages;
- (void)handleEnterRoom:(id)a0;
- (void)handleMute:(id)a0;
- (void)jsbHandler:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2 processed:(BOOL *)a3;
- (void)setupLiveInfo;
- (void)smoothEnterRoom:(id)a0;
- (double)getPlayerShowHeight;
- (double)getPluginBottom;
- (void)setupCAGradientLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)unsubscribeLiveCardMessages;
- (void)handleDisappear;
- (void)handleDidAppear;
- (void)didBecomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)play;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
