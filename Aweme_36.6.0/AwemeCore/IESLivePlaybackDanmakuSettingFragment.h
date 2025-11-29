@class HTSLiveEpisode, UIView, IESLivePlaybackPopupItem, HTSLiveToolbarItem, NSDate, IESLivePlaybackDanmakuSettingPanelView, HTSEventContext, NSString, IESLivePlaybackDanmakuPortraitSettingPanelView, IESLivePlaybackComponentContext, IESLivePlaybackDanmakuSettingStore;

@interface IESLivePlaybackDanmakuSettingFragment : NSObject <IESLivePlaybackCommentAction, IESLivePlaybackAutoRotateAction, IESLivePlaybackChangeStreamAction, IESLivePlaybackDanmakuSettingFragmentProtocol>

@property (retain, nonatomic) IESLivePlaybackDanmakuSettingStore *store;
@property (retain, nonatomic) IESLivePlaybackPopupItem *popupItem;
@property (weak, nonatomic) UIView *popupContainer;
@property (nonatomic) BOOL settingsPanelShow;
@property (nonatomic) BOOL danmakuSwitchShownTracked;
@property (nonatomic) BOOL isHidePopupItemByFilter;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) HTSLiveToolbarItem *onlySwitchItem;
@property (retain, nonatomic) HTSLiveToolbarItem *landscapeSettingItem;
@property (retain, nonatomic) HTSLiveToolbarItem *portraitSettingItem;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) IESLivePlaybackDanmakuPortraitSettingPanelView *portraitSettingView;
@property (retain, nonatomic) IESLivePlaybackDanmakuSettingPanelView *settingView;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL portraitStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentOrientationChanged:(long long)a0;
- (void)didSetAttachingDIContext;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)componentDidMount;
- (void)sendDanmakuEnabled:(BOOL)a0;
- (void)showPanelView;
- (void)showPopupView;
- (void)showDanmakuSettingPanel;
- (void)trackDanmakuSettingPanelShow;
- (void)hidePanelView;
- (void)hideSettingPanel;
- (BOOL)settingPanelVisible;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)commentDidStart;
- (void)commentDidEnd;
- (void)streamChangedWithEpisode:(id)a0;
- (BOOL)usePadNewStyle;
- (void)trackDanmakuSettingIconShow;
- (void)didClickDanmakuSettingButton;
- (id)danmukuEngineSettings;
- (void)enableNormalDanmuku:(BOOL)a0;
- (void)p_updatePortraitStream:(BOOL)a0;
- (void)updateToolbarItem;
- (void)loadDanmakuSwitchInMoreSettingToolsPortrait;
- (void)loadDanmuSettingInMoreSettingTools;
- (void)trackDanmakuSwitchShow;
- (void)trackDanmakuSwithDidSelected:(BOOL)a0;
- (void)trackDanmakuSettingIconDidSelected;
- (void)enableDanmakuInGeneral:(BOOL)a0;
- (void)loadPortraitDanmakuSettingPanelPopView;
- (void)loadDanmakuSettingPanelPopView;
- (void)trackDanmakuSettingPanelShowTime;
- (struct CGSize { double x0; double x1; })popupContainerViewSize;
- (BOOL)isEnableNormalDanmuku;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;

@end
