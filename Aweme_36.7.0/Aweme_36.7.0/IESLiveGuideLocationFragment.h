@class IESLiveActionSheetPresentViewController, NSString, UIView, IESLiveGuideToolBarItem, UIViewController;
@protocol IESLiveGuideToolBarProvider, IESLivePOIProtocol;

@interface IESLiveGuideLocationFragment : IESLiveGuideComponent <IESLiveGuideLocationRouter>

@property (retain, nonatomic) IESLiveGuideToolBarItem *addLocationItem;
@property (retain, nonatomic) id<IESLivePOIProtocol> livePOI;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> guideToolbarProvider;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *actionPresentor;
@property (retain, nonatomic) UIViewController *selectLocationVC;
@property (nonatomic) BOOL enableNewPOIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)showAddLocationPannel;
- (void)showAddDetailLocationPanel;
- (void)trackPOIButtonClick;
- (void)showPOISelectResult;
- (void)showHudIfNeeded;
- (void)showIntroGuideBubble;
- (void)p_trackShowOrClick:(BOOL)a0;
- (void)addLocationButtonPressed;
- (void)addLocationButtonPressedV2;
- (void)trackPOIButtonShow;
- (void).cxx_destruct;

@end
