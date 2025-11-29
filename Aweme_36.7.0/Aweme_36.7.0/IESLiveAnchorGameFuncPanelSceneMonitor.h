@class NSString, NSHashTable;

@interface IESLiveAnchorGameFuncPanelSceneMonitor : NSObject <IESLiveInteractAction, IESLiveAnchorGameFuncPanelSceneMonitor>

@property (retain, nonatomic) NSHashTable *notifyTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)didJoinChannelWithLayout:(id)a0;
- (unsigned long long)localLiveSceneType;
- (void)addSceneNotify:(id)a0;
- (void)removeSceneNotify:(id)a0;
- (id)getPushGameStreamExtraParams;
- (BOOL)isVideoBigParty:(unsigned long long)a0;
- (unsigned long long)liveEntranceWithInteractiveScene:(unsigned long long)a0;
- (long long)getXplaySceneType;
- (unsigned long long)getSceneInVideoRoom;
- (unsigned long long)getSceneInAudioRoom;
- (unsigned long long)getSceneInObsRoom;
- (unsigned long long)getSceneInRecordRoom;
- (unsigned long long)getSceneInMediaRoom;
- (void).cxx_destruct;

@end
