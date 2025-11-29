@class UIView, NSString, IESLiveLinkmicSettingApi, IESLiveLinkmicGridLayoutCalculator, IESLiveBigPartyOpenGuideSettingPanel, IESLiveBigPartyGuideMaskImageView, IESLiveInteractionLayout, HTSLiveInitInfoSetting;

@interface IESLiveBigPartyOpenGuideFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveBigPartyOpenGuideSettingPanelDelegate, IESLiveBigPartyOpenGuideSettingPanelDataSource, IESLiveBigPartyOpenGuideService, IESLiveGuideOpenLiveAdditionalEvent, IESLiveAnchorGuideInteractiveSceneAction, IESLiveGuideToolBarAction, IESLiveVirtualLiveGuideActions>

@property (retain, nonatomic) IESLiveInteractionLayout *currentPreviewLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *currentSelectLayout;
@property (nonatomic) BOOL autoOpenBigParty;
@property (retain, nonatomic) IESLiveLinkmicGridLayoutCalculator *layoutCalculator;
@property (retain, nonatomic) IESLiveLinkmicSettingApi *api;
@property (weak, nonatomic) UIView *cameraPreview;
@property (retain, nonatomic) UIView *guideView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originAnchorFrame;
@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanel *guideSettingPanel;
@property (nonatomic) unsigned long long liveType;
@property (copy, nonatomic) NSString *functionType;
@property (retain, nonatomic) HTSLiveInitInfoSetting *videoTabCacheInitInfo;
@property (retain, nonatomic) HTSLiveInitInfoSetting *videoChatSubTypeInitInfo;
@property (retain, nonatomic) HTSLiveInitInfoSetting *videoChatSubTypeInfo;
@property (retain, nonatomic) IESLiveBigPartyGuideMaskImageView *mainSlotImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *multiLinkGameId;
@property (copy, nonatomic) NSString *multiLinkGameName;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)bindViewModel;
- (void)fetchSetting;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)toolbarItemReloadFinished;
- (void)appendStartLiveTrackParams:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (void)appendCreateAnchorBusinessParams:(id)a0 completion:(id /* block */)a1;
- (void)appendLiveActionTrackParams:(id)a0 completion:(id /* block */)a1;
- (void)showOpenGuideSettingPanelWithSource:(id)a0;
- (id)videoGuideFunctionTypeStr;
- (BOOL)isOpenBigParty;
- (BOOL)hasMultiLinkGame;
- (void)didSelectSubscene:(unsigned long long)a0;
- (void)guideVirtualLiveWillStart;
- (id)configsArray;
- (void)liveTypeChangeAction:(unsigned long long)a0;
- (void)handleMultiLinkGame;
- (void)trackSettingPanelShow;
- (void)trackIconClick;
- (BOOL)isInVideoChatSubType;
- (void)showMainSlotImageViewIfNeeded;
- (void)updateOpenGuideWithInitInfo:(id)a0;
- (void)handleMultiLinkGameItem;
- (void)updateSettingWithSettingKey:(int)a0 value:(id)a1 showLoading:(BOOL)a2 forceUpdateUI:(BOOL)a3;
- (void)removeGuideViewIfNeed;
- (void)updateOpenGuideWithInitInfo:(id)a0 cache:(BOOL)a1;
- (void)loadBigPartyGuideView;
- (void)updateSettingWithSettingKey:(int)a0 value:(id)a1;
- (void)didReceiveInitInfoSetting:(id)a0;
- (id)generateInfoSettingFromParamsIfNeeded;
- (void)updateFunctionType;
- (void)updateGuideSettingPanelIfNeed;
- (void)loadDynamic1v6GuideView;
- (void)loadBigPartyEqualGuideView;
- (void)calculatorDirectly;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerRectWithLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateMainSlotImageViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; })calculatorParamsWithContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)configWithLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerRectForMultiGame;
- (id)configForMultiGame;
- (id)categorysArray;
- (void).cxx_destruct;
- (void)reset;

@end
