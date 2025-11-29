@class UIViewController, NSString, AWEAwemeModel, UIView, AWEBinding, AWELivePreStreamContext;
@protocol IESLivePlayerProtocol, AWESearchEntryElementProtocol, AWERelatedRecommendPanelManagerProtocol;

@interface AWELiveRelatedRecommendPanelController : NSObject <AWERelatedAWERecommendPanelManagerDelegate, AWELiveSwiftImpl.AWELiveRelatedRecommendPanelProtocol>

@property (retain, nonatomic) id<AWERelatedRecommendPanelManagerProtocol> relatedRecommendPanelManager;
@property (weak, nonatomic) UIViewController *container;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (retain, nonatomic) id<IESLivePlayerProtocol> livePlayerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shrinkContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originContainerFrame;
@property (nonatomic) BOOL hasMuted;
@property (retain, nonatomic) UIView<AWESearchEntryElementProtocol> *searchEntryView;
@property (retain, nonatomic) AWEBinding *liveTitlePanelTabBarHiddenBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)partialSheetWillExpanded:(id)a0;
- (id)enterMethod;
- (void)showRelatedRecommendPanel;
- (BOOL)isShowingLiveRelatedPanelView;
- (BOOL)isPanelShowed;
- (void)recommendPanelPartialSheetWillShow;
- (void)recommendPanelDiscoverEntranceViewAlphaProgress:(double)a0;
- (void)recommendPanelPartialSheetPanProgress:(double)a0;
- (void)recommendPanelDidDragUp:(double)a0;
- (void)recommendPanelTrackSlide;
- (void)recommendPanelPartialSheetWillDismiss;
- (void)recommendPanelPartialSheetDidDismiss:(id)a0;
- (void)recommendPanelPauseVideo;
- (void)recommendPanelPlayVideo;
- (void)recommendPanelStateUpdate:(BOOL)a0 handleVideoPlayState:(BOOL)a1;
- (void)recommendPanelPartialSheetDidShow;
- (id)initWithContext:(id)a0 container:(id)a1 currentModel:(id)a2;
- (void)moveContentVideoUpWithOffset:(double)a0;
- (void)resizeVideoWhenDragPanel:(double)a0;
- (void)bindService;
- (void)changeLivePlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 callTrace:(id)a1;
- (void)removeDiscoverEntranceView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetHeight:(double)a1;
- (void)addDiscoverEntranceViewIfNeed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })portraitVideoShrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetHeight:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fixedHeightShrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetHeight:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })portraitVideoShrinkDisplayContentRectWithOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayRatioStrategy:(double)a1 targetHeight:(double)a2;
- (void)liveRelatedRecommendPanelViewAppear;
- (void).cxx_destruct;

@end
