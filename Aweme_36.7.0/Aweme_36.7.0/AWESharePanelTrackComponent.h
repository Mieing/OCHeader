@class NSSet, NSString, NSMutableSet, AWESharePanelRenderPerformanceInfo;
@protocol AWEIMSharePanelTrackIDGeneratorProtocol;

@interface AWESharePanelTrackComponent : AWEIMComponentBase <AWESharePanelTrackInterface>

@property (nonatomic) BOOL isFirstRendered;
@property (retain, nonatomic) NSMutableSet *showedTrackInfo;
@property (retain, nonatomic) NSSet *firstScreenRenderedTrackInfo;
@property (retain, nonatomic) id<AWEIMSharePanelTrackIDGeneratorProtocol> trackContext;
@property (retain, nonatomic) AWESharePanelRenderPerformanceInfo *renderPerformanceTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackComponentClickResultWithCommonParams:(id)a0 info:(id)a1 resultType:(unsigned long long)a2;

- (id)commonParams;
- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)trackPanelShow;
- (void)trackComponentShowWithInfo:(id)a0;
- (void)trackComponentClickWithInfo:(id)a0 exit:(BOOL)a1;
- (void)trackComponentScrollWithSection:(long long)a0;
- (void)trackComponentShowLegacyWithInfo:(id)a0;
- (void)trackComponentClickLegacyWithInfo:(id)a0;
- (void)updatePanelShowPerformanceState:(unsigned long long)a0;
- (void)updatePanelShowPerformanceState:(unsigned long long)a0 date:(id)a1;
- (void)trackPanelHide;
- (void)trackPanelShowPerformance;
- (void).cxx_destruct;
- (id)panelName;

@end
