@class FBKVOController, NSString, IESECServiceProxy, NSArray, IESECWinLiveInfoModel, IESECWinLiveGiftModel, IESECWinContext;
@protocol IESECWinDataService, IESECWinOpportunityService, IESECGoodsDetailLiveFloatOnTop, IESECLiveCardModuleInterface, IESECWinLynxCardService;

@interface IESECWinLiveService : NSObject <IESECWinOpportunityProtocol, IESECWinLiveService>

@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataServiceProxy;
@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (retain, nonatomic) IESECWinLiveInfoModel *liveInfo;
@property (retain, nonatomic) id<IESECGoodsDetailLiveFloatOnTop> liveMiniWindow;
@property (copy, nonatomic) NSString *liveTitle;
@property (copy, nonatomic) NSString *streamData;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSArray *liveCoverUrlList;
@property (retain, nonatomic) IESECWinLiveGiftModel *liveGiftModel;
@property (retain, nonatomic) id<IESECLiveCardModuleInterface> cardModule;
@property (retain, nonatomic) FBKVOController *KVOController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ clickToLiveRoomBlock;
@property (copy, nonatomic) id /* block */ clickAuthorToLiveRoomBlock;
@property (copy, nonatomic) id /* block */ clickToLiveRoomListBlock;
@property (copy, nonatomic) id /* block */ detachMiniWindowBlock;
@property (copy, nonatomic) id /* block */ muteWindowLiveBlock;
@property (copy, nonatomic) id /* block */ disableMiniWindow;
@property (copy, nonatomic) id /* block */ isSmallWindowState;
@property (nonatomic) BOOL hasShowLivingSale;
@property (nonatomic, getter=isLiveRoomTransferring) BOOL liveRoomTransferring;
@property (nonatomic, getter=isLiveMuted) BOOL liveMuted;
@property (nonatomic) BOOL shouldTransferToLiveRoomLeaveFinger;
@property (copy, nonatomic) NSString *innerBtmID;
@property (nonatomic) BOOL nativeUnmute;

+ (BOOL)isLiveClickClose;

- (id)anchorId;
- (BOOL)isShowLive;
- (void)subscribeLiveCardMessages;
- (void)unsubscribeLiveCardMessages;
- (double)p_liveMiniWindowTopOffset;
- (BOOL)recordMiniWindowSession;
- (id)currentActiveRoomID;
- (void)trackLivesdkLiveShow;
- (void)trackLivesdkLivecellClick:(unsigned long long)a0;
- (void)trackLivesdkOpenAudio;
- (void)p_updateCardModuleWithContainerDelegate:(id)a0 cardViewDelegate:(id)a1;
- (id)liveCardTrackParams;
- (id)p_passThroughLogDataDict;
- (id)ecomLiveParamsJSONStrOnPreLive;
- (id)liveGiftMetaInfoDict;
- (double)liveContentHeight;
- (double)liveVisibleHeight;
- (BOOL)isShowMiniWindow;
- (id)getRoomURLWithClickType:(unsigned long long)a0;
- (void)setLiveAndMiniWindowMuted:(BOOL)a0;
- (void)fetchCardIfNeeded;
- (void)setupLiveMiniWindowOn:(id)a0 from:(id)a1;
- (BOOL)attachLiveMiniWindowIfNeeded;
- (BOOL)detachLiveMiniWindowIfNeeded;
- (id)ecomLiveParamsOnEnterLiveWithClickType:(unsigned long long)a0;
- (void)container_viewDidDisappear:(BOOL)a0;
- (void)tryToMuteMiniWindow:(BOOL)a0;
- (void)setLiveMiniWindowMuted:(BOOL)a0;
- (BOOL)shouldReuseRoomPlayer;
- (void)p_setLiveMiniWindowActionBlock;
- (void)trackAdLivePlay;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)messageReceived:(id)a0;
- (void)updateModel;

@end
