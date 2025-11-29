@class IESLiveModalDialog, NSString, IESLiveRevenueInteractPlayAPI;
@protocol IESHYControllerProtocol;

@interface IESLiveRevenueInteractPlayBuilder : NSObject <HTSLiveMessageSubscriber, IESHYControllerDelegate, IESLiveRevenueInteractPlayBuilderService>

@property (retain, nonatomic) IESLiveRevenueInteractPlayAPI *api;
@property (nonatomic) long long expiredBattleId;
@property (retain, nonatomic) IESLiveModalDialog *onceMoreDialog;
@property (weak, nonatomic) id<IESHYControllerProtocol> designatedGiftPKInvitedPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (BOOL)isDoublePKing;
- (id)openHybridURL:(id)a0 fromInside:(BOOL)a1;
- (void)openPlayWithConfig:(id)a0 members:(id)a1 extraParams:(id)a2 callback:(id /* block */)a3;
- (void)invitePlayWithConfig:(id)a0 callback:(id /* block */)a1;
- (void)invitePlayWithInviteType:(int)a0 callback:(id /* block */)a1;
- (void)finishPlayWithReason:(long long)a0 isManually:(BOOL)a1;
- (void)requestPlayStateTransition:(long long)a0 stage:(long long)a1;
- (void)requestBattleOnceMoreReplyWithInviterId:(id)a0 inviteType:(int)a1 toMultiPKMode:(int)a2 isAccept:(BOOL)a3;
- (void)finishPlayPunish;
- (void)checkCacheBattleMessageIfNeed;
- (void)changeToMultiPKModeWithBattleConfig:(id)a0 callback:(id /* block */)a1;
- (void)changeMultiPKTeamWithBattleConfig:(id)a0 callback:(id /* block */)a1;
- (void)askPropInfoNotifyWithNotifyType:(unsigned long long)a0 callback:(id /* block */)a1;
- (void)dismissOnceMoreInvitedIfNeeded;
- (void)logEvent:(id)a0 extra:(id)a1;
- (void)onBattleFinish:(id)a0;
- (void)resolveBattleFinishDataToResult:(id)a0;
- (void)resolveBattleFinishDataForCutShort:(id)a0;
- (void)dispatchRoomMessageWithDisplayText:(id)a0 content:(id)a1;
- (void)monitorMultiPKFinish2Punish;
- (void)onBattleInviteMessageReceived:(id)a0;
- (void)onBattleRejectMessageReceived:(id)a0;
- (void)showDesignatedGiftPKInvitedPanel:(id)a0;
- (id)model;
- (void).cxx_destruct;
- (id)adapter;
- (id)provider;
- (BOOL)isAnchor;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
