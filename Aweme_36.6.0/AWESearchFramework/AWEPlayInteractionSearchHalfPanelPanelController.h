@class NSString, AWESearchHalfPanelViewController;

@interface AWEPlayInteractionSearchHalfPanelPanelController : AWEPlayInteractionNewBaseController <AWESearchHalfPanelInteractionProtocal, AWEPlayInteractionSearchHalfPanelPanelControllerProtocol, AWESearchAIGCPanelDelegateProtocol>

@property (retain, nonatomic) AWESearchHalfPanelViewController *halfPanelViewController;
@property (nonatomic) long long contentStatus;
@property (nonatomic) BOOL banAdjustVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showHalfPanel;
@property (copy, nonatomic) id /* block */ didClosePanel;

- (BOOL)isPanelShowed;
- (void)openSearchHalfPanel:(id)a0 WithLogExtraDict:(id)a1;
- (long long)searchAIAbstract;
- (void)searchAIGCPanel_pauseVideo;
- (void)searchAIGCPanel_playVideo;
- (void)searchAIGCPanel_panToExitWithProgress:(double)a0;
- (void)searchAIGCPanel_willChangeToContentStatus:(long long)a0 animated:(BOOL)a1 duration:(double)a2;
- (void)searchAIGCPanel_willCloseSevenSplitScreen:(BOOL)a0 duration:(double)a1;
- (void)searchAIGCPanel_didCloseSevenSplitScreen;
- (void)jumpToAIGCWithModel:(id)a0 WithLogExtraDict:(id)a1;
- (void)jumpToCommonPanelWithModel:(id)a0;
- (void)trackAbstractInnerPanelShowWithModel:(id)a0 WithLogExtraDict:(id)a1;
- (void)closeSearchHalfPanel;
- (void)resizeVideoWithTranslation:(struct CGPoint { double x0; double x1; })a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)seekPlayerTime:(double)a0 completion:(id /* block */)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)viewWillAppear;
- (void)addObserver;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)playVideo;
- (void)pauseVideo;
- (void)viewWillDisappear;

@end
