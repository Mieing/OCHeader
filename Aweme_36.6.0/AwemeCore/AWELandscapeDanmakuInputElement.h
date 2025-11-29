@class AWELandScapeBottomDanmakuView;

@interface AWELandscapeDanmakuInputElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) AWELandScapeBottomDanmakuView *danmakuView;
@property (nonatomic) BOOL hasTrackedDanmakuInputShow;

+ (Class)aAWEPlayInteractionDanmakuElementAdapterClass;

- (void)trackDanmakuLandScapePubShow;
- (id)aAWEPlayInteractionDanmakuElementAdapter;
- (void)landscapeDanmakuGuide;
- (void)trackCloseSwitchGuideWithEvent:(id)a0;
- (void)realClickDanmakuPostButton;
- (void)handleDanmakuSwitchButtonTap;
- (void)handleDanmakuSettingButtonTap;
- (void)handleDanmakuPostButtonTap;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
