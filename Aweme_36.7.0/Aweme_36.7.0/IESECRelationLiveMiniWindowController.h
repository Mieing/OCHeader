@class NSString, IESECXBridgeEventSubscriber;
@protocol IESECGoodsDetailLiveFloatOnTop;

@interface IESECRelationLiveMiniWindowController : IESECRelationController <IESECRelationLiveMiniWindowControllerProtocol>

@property (nonatomic) unsigned long long liveMiniWindowType;
@property (retain, nonatomic) id<IESECGoodsDetailLiveFloatOnTop> liveMiniWindow;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *clickTransferURL;
@property (retain, nonatomic) IESECXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL installMute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLiveClickClose;

- (void)resumeSmallWindowStream;
- (id)currentTargetVC;
- (void)subscribeXBridgeEvent;
- (BOOL)attachLiveMiniWindow;
- (BOOL)detachLiveMiniWindow;
- (void)muteLiveMiniWindow:(BOOL)a0;
- (void)setupBaseBinding;
- (void)UIApplicationWillResignActiveNotification;
- (void)UIApplicationDidBecomeActiveNotification;
- (BOOL)p_shouldReuseRoomPlayer;
- (void)p_setLiveMiniWindowActionBlockWithTransferURL:(id)a0;
- (double)p_liveMiniWindowTopOffset;
- (BOOL)recordMiniWindowSession;
- (void)p_tapMiniLiveWindow:(id)a0;
- (id)currentActiveRoomID;
- (void)setupLiveMiniWindowOn:(id)a0 preferReuseLiveStream:(BOOL)a1 fromLive:(BOOL)a2 roomID:(id)a3 tag:(id)a4 transferURL:(id)a5 logExtra:(id)a6 hasLiveTab:(BOOL)a7;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
