@class UIButton, NSString, AWELandscapeLVideoAlbumViewController;

@interface AWELandscapeEpisodeElement : AWELandscapeInteractionBaseElement <AWELandscapeLVideoAlbumViewDelegate>

@property (retain, nonatomic) UIButton *lVideoAlbumButton;
@property (retain, nonatomic) AWELandscapeLVideoAlbumViewController *lVideoAlbumPanel;
@property (nonatomic) BOOL isShowLVideoAlbumPanel;
@property (nonatomic) BOOL hasSetupHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideAllPanels;
- (BOOL)shouldFailedGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void)configUIForFeedShare:(id)a0 allowSelectEpisode:(BOOL)a1;
- (void)refreshWithEpisodeInfo:(id)a0 playMode:(id)a1;
- (void)setupContextHandler;
- (void)hideLongVideoAlbumPanelWithCompletion:(id /* block */)a0;
- (void)traceAlbumButtonClicked;
- (void)showLongVideoAlbumPanel;
- (BOOL)isShowingPanel;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isInteracting;
- (void)viewDidLoad;

@end
