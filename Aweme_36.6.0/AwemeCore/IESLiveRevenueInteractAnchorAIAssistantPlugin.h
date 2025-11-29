@class IESLiveMultiLinkerModel, HTSLiveInteractiveAPIV2, IESLivePKModel, NSDictionary, NSString;
@protocol IESLiveRoomService, IESLiveMultiLinkerProvider, IESLivePKProvider;

@interface IESLiveRevenueInteractAnchorAIAssistantPlugin : NSObject <HTSLiveMessageSubscriber, IESLiveInteractAIAssistantAction>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLivePKProvider> pkProvider;
@property (retain, nonatomic) IESLivePKModel *pkModel;
@property (retain, nonatomic) id<IESLiveMultiLinkerProvider> mLinkerProvider;
@property (retain, nonatomic) IESLiveMultiLinkerModel *mLinkerModel;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactiveAPI;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isCellularOpen;
@property (nonatomic) BOOL cellularPageHasShown;
@property (nonatomic) long long txQualityPoorCount;
@property (copy, nonatomic) NSDictionary *cellularConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserve;
- (void)destroyInstance;
- (void)onReceivedAIUserJoinMessage:(id)a0;
- (void)onReceivedAIUserLeaveMessage:(id)a0;
- (void)muteAiUserIfNeededWithOwnerUserId:(id)a0 isMute:(BOOL)a1;
- (void)muteAiUserWithUserId:(id)a0 isMute:(BOOL)a1;
- (void)onUserJoined:(id)a0 extraInfo:(id)a1;
- (void)switchInteractiveScene;
- (void)changeOnNetworkQuality:(id)a0 remoteQualities:(id)a1;
- (void)cellularSwitchOpen:(int)a0 fromSettingPage:(BOOL)a1;
- (void)audioPublishingChanged:(BOOL)a0 uid:(id)a1;
- (id)initWithRoom:(id)a0 diContext:(id)a1 scene:(unsigned long long)a2;
- (void)onReceivedAIUserSilenceMessage:(id)a0;
- (void)onReceivedAIUserJoinMessageInPK:(id)a0;
- (void)onReceivedAIUserJoinMessageInMulti:(id)a0;
- (void)onReceivedAIUserLeaveMessageInPK:(id)a0;
- (void)onReceivedAIUserLeaveMessageInMulti:(id)a0;
- (void)onReceivedAIUserSilenceMessageInPK:(id)a0;
- (void)onReceivedAIUserSilenceMessageInMulti:(id)a0;
- (id)getUserModelByAIUser:(id)a0;
- (void)openCellular:(BOOL)a0;
- (void)handleCellularOpenIfNeeded;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
