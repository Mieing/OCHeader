@class NSString;
@protocol IESLiveAnchorRecordPreferenceService, IESLivePublishPlaybackJSBBroadcastAction, IESLivePiperProtocol, IESLivePublishMediaService;

@interface IESLivePublishPlaybackPiperHandler : NSObject <IESLivePublishPlaybackJSBBroadcastAction, IESLivePiperHandlerProtocol>

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (retain, nonatomic) id<IESLivePublishMediaService> publishMediaService;
@property (retain, nonatomic) id<IESLiveAnchorRecordPreferenceService> anchorRecordPreference;
@property (retain, nonatomic) id<IESLivePublishPlaybackJSBBroadcastAction> publishActionDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;

- (void)didSetAttachingDIContext;
- (void)registerHandlerWithBridge:(id)a0;
- (void)publishVideoWithParams:(id)a0 callback:(id /* block */)a1;
- (void)H5_publishPlaybackStatusChange:(id)a0 liveID:(id)a1 status:(id)a2;
- (void)H5_publishHighlightStatusChange:(id)a0 status:(id)a1;
- (id /* block */)publishVideoCallHandler;
- (id /* block */)saveDraftCallHandler;
- (id /* block */)syncReplayStatusCallHandler;
- (id)p_createPublishVideoParamsFrom:(id)a0;
- (void)p_publishPlayback:(id)a0 completion:(id /* block */)a1;
- (void)p_publishHighlight:(id)a0 completion:(id /* block */)a1;
- (id)p_createSaveDraftParamsFrom:(id)a0;
- (id)p_createSaveDraftTrackParamsFrom:(id)a0 withRoomId:(id)a1 videoId:(id)a2;
- (void)trackDownloadHighlightResult:(BOOL)a0 cancel:(BOOL)a1;
- (void)startSaveDraft:(id)a0 extra:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3 cancelBlockPasser:(id /* block */)a4;
- (void).cxx_destruct;

@end
