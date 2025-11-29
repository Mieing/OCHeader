@class NSString, UIViewController, AWEAwemeModel;
@protocol AWERelatedVideoDetailVideoRelatedVideoViewControllerProtocol;

@interface AWERVLVRelatedPanelViewModel : AWERVLVBasePanelViewModel <AWERVLVSlidingPanelProtocol, AWERVLVRightPanelProtocol>

@property (retain, nonatomic) UIViewController<AWERelatedVideoDetailVideoRelatedVideoViewControllerProtocol> *relatedView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panelID;
- (id)panelVC;
- (void)startRequestAnimating;
- (void)refreshModel:(id)a0 params:(id)a1;
- (BOOL)canScrollToDownDirection;
- (void)setupWithRelatedPreloadVideos:(id)a0 forModel:(id)a1;
- (void)trackRelatedTabClick:(id)a0;
- (void)panelDidAppear;
- (BOOL)slidingPanelAvailable;
- (id)slidingPanelTitle;
- (void)didScrollToPanel:(BOOL)a0 prevPanel:(id)a1;
- (void)didPanelButtonClicked;
- (void)scrollPanelToTop;
- (void)scrollPanelToTop:(BOOL)a0;
- (void)refreshRelatedVideos:(id)a0 scene:(id)a1 params:(id)a2 awemeModel:(id)a3 completion:(id /* block */)a4;
- (id)rightPanelTitle;
- (double)rightPanelTopPadding;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })scrollOffset;

@end
