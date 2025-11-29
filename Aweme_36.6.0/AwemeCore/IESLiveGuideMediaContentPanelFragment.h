@class IESLiveGuideMediaTitleWarningView, IESLiveGuideMediaFisheyeContentPanelView, NSString, IESLiveMediaGuideContentDeliverView;

@interface IESLiveGuideMediaContentPanelFragment : IESLiveGuideComponent <IESLiveVRSwitchRouter, IESLiveGuideContentPanelEvent, IESLiveGuideInterceptEvent, IESLiveGuideMediaContentPanelService>

@property (retain, nonatomic) IESLiveMediaGuideContentDeliverView *xtMediaGuideContentPanelView;
@property (retain, nonatomic) IESLiveGuideMediaTitleWarningView *warningView;
@property (retain, nonatomic) IESLiveGuideMediaFisheyeContentPanelView *mediaFisheyeContentPanelView;
@property (nonatomic) BOOL showedGuideIntercept;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)switchVRLiveMode:(BOOL)a0;
- (BOOL)mediaLiveShouldShowWarning;
- (void)showTitleWarningWithLength:(unsigned long long)a0;
- (void)didChangedGuideIntercept:(BOOL)a0;
- (void)titleOrCoverDidChange;
- (void)createMediaFisheyeContentView;
- (void)updateWarningView;
- (void).cxx_destruct;

@end
