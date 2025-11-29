@class NSString, AWEBinding;
@protocol AWERelatedRecommendPanelManagerProtocol;

@interface AWEPlayInteractionVideoRelatedPanelController : AWEPlayInteractionNewBaseController <AWERelatedAWERecommendPanelManagerDelegate, AWEPlayInteractionVideoRelatedPanelControllerProtocol>

@property (nonatomic) BOOL videoHasShrinked;
@property (nonatomic) BOOL statusBarUpdateAvailable;
@property (nonatomic) BOOL statusBarDidChange;
@property (nonatomic) BOOL disableHitTestThrottle;
@property (retain, nonatomic) id<AWERelatedRecommendPanelManagerProtocol> relatedRecommendPanelManager;
@property (retain, nonatomic) AWEBinding *videoDescriptionPanelTabBarHiddenBinding;
@property (nonatomic) unsigned long long feedChannelThemeStyleBeforeUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionAdapterClass;

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
- (double)getCommonPanelHeight;
- (id)aAWEPlayInteractionAdapter;
- (void)onFeedTabChangedNotification:(id)a0;
- (void)onTabBarChangedNotification:(id)a0;
- (void)resetVideoRelatedPanel;
- (void)showRelatedRecommendDCPanel;
- (void)restoreTopBarTheme;
- (void)updateTopBarTheme;
- (void)trackPreload;
- (void)pressPreloadData;
- (BOOL)shouldChangeTabBarState;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
