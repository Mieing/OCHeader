@class NSString, IESLiveGuideTopicView, IESLiveGuideAnnounceView;

@interface IESLiveGuideTopicFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveAnchorGuideInteractiveSceneAction, IESLiveBigPartyOpenGuideAction, IESLiveGuideTopicInterface, IESLiveGuideOpenLiveAdditionalEvent>

@property (retain, nonatomic) IESLiveGuideTopicView *topicView;
@property (retain, nonatomic) IESLiveGuideAnnounceView *announceView;
@property (nonatomic) BOOL hasMount;
@property (nonatomic) unsigned long long currentLiveSubType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)willSwitchToLiveTab;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)appendStartLiveTrackParams:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (void)appendLiveActionTrackParams:(id)a0 completion:(id /* block */)a1;
- (id)getTrackParams;
- (BOOL)needShowTopicView;
- (void)updateTopicContentWithModel:(id)a0;
- (void)trackEvent:(id)a0 Params:(id)a1;
- (void)bigPartyOpenGuideDidChangePreviewLayout:(id)a0;
- (void)didSelectSubscene:(unsigned long long)a0;
- (void)setupAnnounceView;
- (void)showTopicBubblesIfNeed;
- (void)trackTopicViewShowEventIfNeed;
- (void)updatePayloadParams;
- (BOOL)shouldHideTopicView;
- (id)getSelectedTopicInfo;
- (void).cxx_destruct;
- (void)updateViews;

@end
