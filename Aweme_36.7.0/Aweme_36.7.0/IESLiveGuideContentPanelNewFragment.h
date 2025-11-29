@class IESLiveGuideContentPanelStore, IESLiveGuideContentPanelViewNew, NSString;

@interface IESLiveGuideContentPanelNewFragment : IESLiveGuideComponent <IESLiveGuideContentPanelRouter, IESLiveGuideActions, IESLiveAnchorOptCategoryActions, IESLiveGuideOpenLiveAdditionalEvent, IESLiveGuideAudioSubSceneService, IESLiveGuideMediaContentPanelService>

@property (retain, nonatomic) IESLiveGuideContentPanelStore *store;
@property (retain, nonatomic) IESLiveGuideContentPanelViewNew *view;
@property (nonatomic) BOOL ignoreBottomPannelViewAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)appendCreateAnchorBusinessParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasCoverImage;
- (void)updateSelectedSubScene:(unsigned long long)a0;
- (void)willShowOptCategoryContainer;
- (BOOL)mediaLiveShouldShowWarning;
- (void)showTagChooseView;
- (void)showCoverPickerView;
- (void)poiNameDidChange:(id)a0;
- (void)poiNameDidChange:(id)a0 needShowGuideLocation:(BOOL)a1;
- (BOOL)enablePOINewStyle;
- (void)setupContentPanelViewNew;
- (void).cxx_destruct;

@end
