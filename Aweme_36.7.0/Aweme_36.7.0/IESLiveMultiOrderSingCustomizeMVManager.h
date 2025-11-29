@class HTSLiveOrderSingMVInfo, NSString, IESLiveMultiOrderSingApi, HTSEventContext, IESLiveGCDTimer, NSMutableDictionary;
@protocol IESLiveRoomService, IESLiveMultiOrderSingMVManagerDelegate;

@interface IESLiveMultiOrderSingCustomizeMVManager : NSObject <IESLiveMultiOrderSingMVManagerProtocol>

@property (copy, nonatomic) NSString *currentSingItemId;
@property (copy, nonatomic) NSString *currentSingUserId;
@property (retain, nonatomic) HTSLiveOrderSingMVInfo *currentMVInfo;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveMultiOrderSingApi *api;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGCDTimer *stopPlayCountdownTimer;
@property (retain, nonatomic) NSMutableDictionary *itemMVBindedTabNameDict;
@property (retain, nonatomic) NSMutableDictionary *itemMVBindedVidDict;
@property (weak, nonatomic) id<IESLiveMultiOrderSingMVManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)openMVSelectPanelWithItemID:(id)a0;
- (void)handleMVWRDSReceived:(id)a0;
- (void)restartMVBackgroundIfNeed;
- (void)handlePlayModeInfo:(id)a0;
- (void)handleOrderSingMessage:(id)a0;
- (void)handleOrderSingActionContent:(id)a0;
- (void)handleOrderSingMVActionContent:(id)a0;
- (void)startMVBackgroundWithMVInfo:(id)a0 itemID:(id)a1;
- (void)stopMVBackgroundWithActionContent:(id)a0;
- (void)hideCurrentMVPanel;
- (void)updateMVBindInfoWithItemID:(id)a0 tabName:(id)a1 vid:(id)a2;
- (BOOL)isCurrentUserSinging;
- (void)trackMVPlayDurationWithMVInfo:(id)a0 itemID:(id)a1 mvTab:(id)a2 endType:(id)a3 duration:(long long)a4;
- (void)trackMVPlayWithMVInfo:(id)a0 itemID:(id)a1 mvTab:(id)a2;
- (void)askCloseMVWithMVInfo:(id)a0 itemID:(id)a1 source:(id)a2;
- (BOOL)isCurrentUserWithUserId:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
