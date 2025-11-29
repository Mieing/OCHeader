@class HTSEventContext, NSString, IESLivePlaybackPaidStreamParameterCreator, NSMutableDictionary, NSDictionary, IESLivePlaybackComponentLoader, IESLivePaidStreamInteractionAuther, IESLivePlaybackComponentContext, HTSLiveEpisode;

@interface IESLivePlaybackPaidStreamControlFragment : IESLivePlaybackComponent <IESLivePaidStreamControlProvider, IESLivePaidStreamPlugin, IESLiveMessageSubscriber, IESLivePlaybackPaidStreamControlTrackProvider, IESLivePlaybackChangeStreamAction, IESLivePaidStreamSecurityDelegate>

@property (nonatomic, getter=isStreamDidStall) BOOL streamDidStall;
@property (retain, nonatomic) NSMutableDictionary *paidStreamCreators;
@property (retain, nonatomic) NSDictionary *paidStreams;
@property (retain, nonatomic) IESLivePaidStreamInteractionAuther *interactionAuther;
@property (retain, nonatomic) IESLivePlaybackPaidStreamParameterCreator *parameterCreator;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESLivePlaybackComponentLoader *componentLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (BOOL)inTrial;
- (BOOL)inTrialFinish;
- (void)componentDidUnmount;
- (id)verifyInteractionAuthDisabled:(unsigned long long)a0;
- (void)openPaidPanel:(unsigned long long)a0 source:(unsigned long long)a1 extraURLParams:(id)a2 paidObject:(id)a3;
- (void)userDidTakeScreenshotNotification:(id)a0;
- (void)setupObserver;
- (void)paidStreamTrialDidStart:(id)a0;
- (void)paidStream:(id)a0 trialRemainingTimeDidChange:(double)a1;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 willDisplayForBlockType:(unsigned long long)a1;
- (void)paidStream:(id)a0 didEndDisplayForBlockType:(unsigned long long)a1;
- (void)paidStream:(id)a0 actionForBlockType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)paidStreamDidEndDisplayGrabFreeView:(id)a0;
- (void)paidStream:(id)a0 grabFreeSucceed:(BOOL)a1;
- (void)paidStream:(id)a0 didChangeAuthRetType:(unsigned long long)a1 retSource:(unsigned long long)a2 reason:(unsigned long long)a3;
- (void)paidStream:(id)a0 didChangeAuthPromiseType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (BOOL)hasRet;
- (BOOL)hasPromised;
- (BOOL)inScreenCaptured;
- (void)installPaidBlockView:(unsigned long long)a0;
- (double)trialFinishStayDuration;
- (id)findHighPriorityPaidStream;
- (BOOL)inTrialForPaidScene:(long long)a0;
- (BOOL)inTrialFinishForPaidScene:(long long)a0;
- (BOOL)hasRetForPaidScene:(long long)a0;
- (BOOL)hasPromisedForPaidScene:(long long)a0;
- (id)verifyInteractionAuthDisabled:(unsigned long long)a0 openPaidPanelWhenDisabled:(BOOL)a1;
- (void)openPaidPanel:(unsigned long long)a0 extraURLParams:(id)a1;
- (void)messageReceived:(id)a0 source:(id)a1;
- (void)multiTabMachineShowWithEpisode:(id)a0;
- (void)multiTabMachineClickWithEpisode:(id)a0;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)configPaidStreamCreators:(id)a0;
- (void)openPaidPanel:(unsigned long long)a0 extraURLParams:(id)a1 paidStream:(id)a2;
- (void)verifyInteractionRoomStatusBeforeOpenPaidPanel:(id /* block */)a0;
- (void)streamWillChangeWithEpisode:(id)a0;
- (void)streamChangedWithEpisode:(id)a0;
- (void)manualUpdateCameraListUI:(id)a0;
- (void)removeAllProcessNeeds;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
