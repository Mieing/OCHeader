@class AWESearchAIGCSAMIAssistantHandleStatus, AWESearchAIGCVoiceBroadcastPlayer, NSString, AWESearchAIGCSAMIAssistantHandle, BDXBridgeEventSubscriber, AWESearchAIGCSAMIAssistantTask;
@protocol AWESearchAIGCVoiceBroadcastManagerDelegate;

@interface AWESearchAIGCVoiceBroadcastManager : NSObject <AWESearchAIGCSAMIAssistantHandleDelegate, AWESearchAIGCVoiceBroadcastPlayerDelegate, AWESearchAIGCVoiceBroadcastManagerProtocol>

@property (nonatomic) BOOL globalEnable;
@property (retain, nonatomic) AWESearchAIGCSAMIAssistantHandle *handle;
@property (retain, nonatomic) BDXBridgeEventSubscriber *cardVoiceBroadcastStatusSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *interruptVoiceBroadcastSubscriber;
@property (retain, nonatomic) AWESearchAIGCSAMIAssistantHandleStatus *handleStatus;
@property (retain, nonatomic) AWESearchAIGCSAMIAssistantTask *currentTask;
@property (retain, nonatomic) AWESearchAIGCVoiceBroadcastPlayer *audioPlayer;
@property (weak, nonatomic) id<AWESearchAIGCVoiceBroadcastManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (void)stopVoiceBroadcast;
- (void)handleAudioInterruption:(id)a0;
- (void)voiceBroadcastChangeStatusWithParams:(id)a0;
- (void)voiceBroadcastInterruptedWithParams:(id)a0;
- (void)assistantHandle:(id)a0 receiveEvent:(id)a1;
- (BOOL)isVoiceBroadcastPlayingWithSearchID:(id)a0;
- (BOOL)isGlobalVoiceBroadcastEnabled;
- (void)startGlobalVoiceBroadcastWithSearchID:(id)a0;
- (void)stopGlobalVoiceBroadcast;
- (void)startVoiceBroadcastWithSearchID:(id)a0;
- (void)startVoiceBroadcastForManualWithSearchID:(id)a0;
- (void)setGlobalVoiceBroadcastEnable:(BOOL)a0;
- (void)stopVoiceBroadcastIsUserClick:(BOOL)a0 isSilent:(BOOL)a1;
- (void)startVoiceBroadcastWithParams:(id)a0;
- (void)prepareHandleIfNeed;
- (id)voiceBroadcastSpeaker;
- (void)notifyChatOperationAreaCardIsPlaying:(BOOL)a0;
- (void)stopVoiceBroadcastWhenCacheFinished;
- (void)handleAudioRouteChange:(id)a0;
- (id)voiceBroadCaseDebugInfo;
- (void)voiceBroadcastPlayerIsPlayingSilentData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)addObservers;
- (void)removeObservers;

@end
