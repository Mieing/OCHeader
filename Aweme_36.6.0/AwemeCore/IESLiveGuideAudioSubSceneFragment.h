@class IESLiveGuideAudioSubScenePickerView, IESLiveGuideAudioSubSceneViewModel, IESLiveGuideAnnounceView, NSString;

@interface IESLiveGuideAudioSubSceneFragment : IESLiveGuideComponent <IESLiveGuideAudioSubScenePickerViewDelegate, IESLiveGuideActions, IESLiveGuideAudioSubSceneService, IESLiveBigPartyOpenGuideAction, IESLiveGuideStartLiveEvent>

@property (retain, nonatomic) IESLiveGuideAudioSubScenePickerView *subScenePickerView;
@property (retain, nonatomic) IESLiveGuideAudioSubSceneViewModel *viewModel;
@property (nonatomic) unsigned long long audioInteractiveScene;
@property (retain, nonatomic) IESLiveGuideAnnounceView *announceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)bigPartyOpenGuideDidChangePreviewLayout:(id)a0;
- (void)liveRequesting:(BOOL)a0;
- (void)updateSelectedSubScene:(unsigned long long)a0;
- (void)refreshSelectSubSceneWithType:(unsigned long long)a0;
- (void)setupSubScenePickerView;
- (void)refreshPickerView;
- (void)refreshAnnounceView;
- (BOOL)needShowSubScenePicker;
- (id)getCurrentSelectedVideoSubSceneStr;
- (BOOL)needShowAnnounceView;
- (BOOL)shouldHideAnnounceViewView;
- (void)handleSelectSubScene:(unsigned long long)a0;
- (void)didSelectSubSceneWithIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
