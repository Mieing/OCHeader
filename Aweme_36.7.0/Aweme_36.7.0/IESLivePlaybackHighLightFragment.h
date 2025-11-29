@class IESLivePlaybackHighLightButton, NSArray, HTSEventContext, IESLivePlaybackHighLightTipView, NSString;

@interface IESLivePlaybackHighLightFragment : IESLivePlaybackComponent <IESVSVideoPlayAction, IESLivePlaybackHighLightRouter, IESLivePlaybackSeekAction, IESLivePlaybackCustomAutoHideAnimService, IESLiveAirPlayAction, IESLivePlaybackComponentLifeCycle>

@property (retain, nonatomic) NSArray *highlights;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL isVerticalStream;
@property (nonatomic) BOOL isRenderStart;
@property (nonatomic) BOOL detailButtonDidShow;
@property (nonatomic) long long currentTipShowAtIndex;
@property (nonatomic) long long currentRandomTipIndex;
@property (nonatomic) unsigned long long currentProgressBarSource;
@property (nonatomic) BOOL currentTipViewIsAutoShowed;
@property (retain, nonatomic) IESLivePlaybackHighLightTipView *tipView;
@property (retain, nonatomic) IESLivePlaybackHighLightButton *tipDetailButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)trackDetailPageShow;
- (void)landscapeViewsTransformToHidden:(BOOL)a0;
- (void)portraitViewsTransformToHidden:(BOOL)a0;
- (void)hideTipView;
- (void)onAirplayStart;
- (void)onSeekStart;
- (void)onSeekEnd;
- (void)p_firstShowInToday;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoRenderStart;
- (id)getHighlightOfLocation:(double)a0;
- (void)addProgressHighLightNode;
- (void)onProgressSignClickAtIndex:(long long)a0 onView:(id)a1;
- (void)showTipViewAtIndex:(long long)a0 OnView:(id)a1 model:(id)a2 isAuto:(BOOL)a3;
- (void)seekToHighlight:(id)a0;
- (void)didClickTipView:(id)a0;
- (void)seekToHighlightIndex:(unsigned long long)a0;
- (void)transformAnimationBeginTo:(BOOL)a0 source:(unsigned long long)a1;
- (void)transformAnimationEndWith:(BOOL)a0 source:(unsigned long long)a1;
- (void)trackNodeClick:(long long)a0 model:(id)a1;
- (void)trackTipClick:(long long)a0 model:(id)a1;
- (BOOL)needShowGuideTipToday;
- (BOOL)enableNewDetailPanel;
- (void)autoShowGuideTipView;
- (id)baseTrackDictWithIndex:(long long)a0 model:(id)a1;
- (void)showDetailPage;
- (void)trackTipShow:(long long)a0 model:(id)a1;
- (void).cxx_destruct;

@end
