@class IESEZDanmakuContext, NSString, IESLivePopupItem, IESLiveDanmakuDataSettingFilter;
@protocol IESLiveRoomService;

@interface IESLiveDanmakuSettingViewComponent : NSObject <IESLiveMessageInteractionModuleCommentAction, IESLiveMessageInteractionModuleCarnivalAction, IESEZDanmakuNotificationSubscriber, IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (nonatomic) BOOL settingInPanelIsChanged;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) unsigned long long currentScene;
@property (retain, nonatomic) IESLiveDanmakuDataSettingFilter *settingDataFilter;
@property (nonatomic) long long giftDanmakuDisplayingCount;
@property (nonatomic) long long giftLimitMaxCount;
@property (readonly, nonatomic, getter=isSettingPanelVisible) BOOL settingPanelVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentType;

- (void)sendDanmakuEnabled:(BOOL)a0;
- (void)ezDanmakuNotificationCenter:(id)a0 notiEvent:(id)a1 userInfo:(id)a2;
- (void)prepareStart;
- (void)validateSettingValue:(id)a0 withSettingKey:(id)a1;
- (void)checkDanmakuEnableConfig;
- (long long)fontSizeType;
- (void)currentCarnivalTypeDidChangeTo:(unsigned long long)a0;
- (void)showDanmakuSettingPanel:(unsigned long long)a0;
- (long long)alphaPercentValue;
- (BOOL)giftSwitchOn;
- (BOOL)lotterySwitchOn;
- (BOOL)enableDanmakuSettingShow;
- (void)loadDanmakuSettingPanelPopView:(unsigned long long)a0;
- (void)showPopupView:(unsigned long long)a0;
- (id)buildPanelParams;
- (void)hideSettingPanel;
- (id)generateVSSettingViewModel;
- (id)generateSettingViewModel;
- (void)reloadSettingForViewModel:(id)a0;
- (id)requestPageStringValue;
- (void)changeSettingScene:(unsigned long long)a0;
- (BOOL)carnivalSwitchOn;
- (id)oldDanmakuSettingAdapter;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)areaType;

@end
