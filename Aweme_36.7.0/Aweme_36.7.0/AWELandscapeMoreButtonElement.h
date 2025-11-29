@class AWELandscapePlaybackSettingGuide, NSString, UIView, UIButton;
@protocol AWELandscapeMorePanelViewProtocol;

@interface AWELandscapeMoreButtonElement : AWELandscapeInteractionBaseElement <AWELandscapeMorePanelViewDelegate>

@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIView<AWELandscapeMorePanelViewProtocol> *morePanelView;
@property (weak, nonatomic) AWELandscapePlaybackSettingGuide *playbackSettingGuide;
@property (nonatomic) BOOL isShowingMorePanel;
@property (nonatomic) BOOL hasRegisteredGuide;
@property (copy, nonatomic) id /* block */ skipOpeningEndingGuideBlock;
@property (nonatomic) BOOL isUserInteracting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideAllPanels;
- (BOOL)shouldFailedGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void)trackClickMoreButton;
- (void)clickReportButton;
- (void)clickDislikeButton;
- (void)registerLandscapeGuide;
- (void)showMorePanelWithEnterMethod:(id)a0;
- (void)dismissMorePanelWithCompletion:(id /* block */)a0;
- (void)realUploadSyncPlayRequestManually:(id)a0;
- (void)handleClickMoreButton;
- (void)landscapeShowDanmakuSettingsPanel;
- (void)uploadSyncPlayRequestManually:(id)a0;
- (void)landscapeAutoRotateSwitchChanged;
- (BOOL)isShowingPanel;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isPlaying;
- (BOOL)isInteracting;
- (void)reset;
- (void)viewDidLoad;

@end
