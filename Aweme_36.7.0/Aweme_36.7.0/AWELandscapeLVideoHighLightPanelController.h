@class NSString, UIView, AWEShowLongVideoHighLightsPanelViewController, UITapGestureRecognizer;

@interface AWELandscapeLVideoHighLightPanelController : AWELandscapeInteractionBaseController <AWEShowLongVideoHighLightsPanelDelegate, UIGestureRecognizerDelegate, AWELandscapeLVideoHighLightPanelControllerProtocol>

@property (retain, nonatomic) UIView *dismissView;
@property (retain, nonatomic) UIView *panelContainer;
@property (retain, nonatomic) AWEShowLongVideoHighLightsPanelViewController *highLightPanelVC;
@property (nonatomic) BOOL isShowingHighLightPanel;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)enterMethod;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)clickShare;
- (void)hideAllPanels;
- (void)showChapterPanelWithCompletion:(id /* block */)a0;
- (id)createChapterViewController;
- (id)createLVideoHighLighPanelViewController;
- (void)handleClickDismissView:(id)a0;
- (void)sheetWillShow;
- (void)sheetWillDisappear;
- (void)clickHighLight:(id)a0;
- (void)clickLike;
- (void)clickComment;
- (void)clickFavourite;
- (double)currentPlayBackTimeInSec;
- (void)dismissHighLightPanel;
- (BOOL)isShowingPanel;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)isInteracting;
- (double)panelWidth;
- (id)fromPage;

@end
