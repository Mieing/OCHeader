@class IESLiveGameCPBridgeProvider, HTSLiveToolbarItemExtra, IESLivePreloadConfig, HTSEventContext, IESLiveAudienceGameCPEntranceTimeline, NSString;
@protocol IESLiveGameCooperationPartnerActions, IESLiveRoomService, IESLiveAudienceGameCPEntranceStoreDelegate;

@interface IESLiveAudienceGameCPEntranceStore : NSObject <HTSLiveMessageSubscriber, IESLiveToolbarComponentHandler, IESLiveToolBarCoordinaryAnimationAction, HTSLiveAudienceActions>

@property (retain, nonatomic) HTSLiveToolbarItemExtra *currentEntranceData;
@property (retain, nonatomic) id<IESLiveGameCooperationPartnerActions> actionDisptcher;
@property (nonatomic) BOOL hadReveicedEnterIntroduceResponse;
@property (nonatomic) BOOL needShowToolbarAnimation;
@property (nonatomic) long long currentLocation;
@property (nonatomic) long long fromType;
@property (retain, nonatomic) IESLiveGameCPBridgeProvider *bridgeProvider;
@property (nonatomic) BOOL hadTriggerToolbarCoordinaryAnimation;
@property (nonatomic) long long logStatus;
@property (nonatomic) BOOL isPreStream;
@property (retain, nonatomic) IESLivePreloadConfig *preloadConfig;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveAudienceGameCPEntranceStoreDelegate> delegate;
@property (retain, nonatomic) IESLiveAudienceGameCPEntranceTimeline *timeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (id)entranceInterface;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)toolbarComponentUpdate:(id)a0;
- (unsigned long long)animationTriggerState;
- (void)onExpandGroupShow:(BOOL)a0;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (void)entranceDidMoveToMorePanel;
- (void)reportGameMetaDataNullLogWithIsMessage:(BOOL)a0;
- (void)updatePromoteGameMetaDataWithJsonArray:(id)a0;
- (id)initWithRoom:(id)a0 isPreStream:(BOOL)a1 trackContext:(id)a2 preloadConfig:(id)a3;
- (void)reportCancelStatusTechTrackerIfNeed;
- (BOOL)hasGameCPEntrance;
- (void)reportTechPromoteIconShowWithIsFromIM:(BOOL)a0 isMore:(BOOL)a1 status:(long long)a2;
- (void)receivedUserDownloadMessage:(id)a0;
- (id)entranceConfigWithItemExtra:(id)a0;
- (BOOL)toolbarEnableWithItem:(id)a0;
- (void)configToolbarItemWithItem:(id)a0;
- (void)preloadGameIconIfNeedWithItemExtra:(id)a0;
- (void)dismissCurrentExplainCardIfNeed;
- (void)entranceWillDismissWithIsMore:(BOOL)a0;
- (id)gameMetaDataInterface;
- (void)updatePromoteInstanceIdIfNeed:(id)a0;
- (void)updateGameMetaDataWithItemExtra:(id)a0;
- (BOOL)getCurrentNeedShowToolbarAnimation;
- (void)entranceDidShowedWithIsMore:(BOOL)a0 isFromIM:(BOOL)a1;
- (id)explainCardInterface;
- (void)observeExplainCardRecviedResponse;
- (void)entranceDidClickedWithIsMore:(BOOL)a0;
- (id)gameInfoArrayWithItemExtra:(id)a0;
- (void)bindGameCPKitProviders;
- (void)subscribeMessage;
- (void)getEnterRoomExplainCardInfoIfNeed;
- (void)unbindGameCPKitProviders;
- (void).cxx_destruct;
- (void)dealloc;
- (void)triggerAnimation;
- (void)messageReceived:(id)a0;

@end
