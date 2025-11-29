@class AWEQuickStoryStickerIconViewController, NSString;

@interface AWEQuickStoryGuideManager : NSObject <HTSAppLifeCycle, AWEQuickStoryGuideManagerProtocol>

@property (nonatomic) BOOL isShowingGuide;
@property (nonatomic) BOOL hasShownOnInitialFetch;
@property (retain, nonatomic) AWEQuickStoryStickerIconViewController *stickIconVC;
@property (nonatomic) unsigned long long stickerGuideMode;
@property (nonatomic) BOOL isShowingSticker;
@property (nonatomic) BOOL isFirstVideoAfterLaunch;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long currentAwemeType;
@property (nonatomic) BOOL clickRuning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteStudioModuleAdapterClass;
+ (Class)aAWEDSStudioAdapterClass;
+ (id)sharedInstance;

- (void)onAppDidBecomeActive;
- (void)dissmissStickerIconIfNeedWithModel:(id)a0 animation:(BOOL)a1;
- (unsigned long long)modeShowStickerIconWithModel:(id)a0;
- (void)showStickerIconIfNeed:(id)a0 mode:(unsigned long long)a1 awemeModel:(id)a2;
- (void)showIconIfNeedWithAweme:(id)a0 referString:(id)a1 mode:(unsigned long long)a2 interactionViewController:(id /* block */)a3;
- (void)showSpecialIconIfNeedWithImage:(id)a0 array:(id)a1 aweme:(id)a2 referString:(id)a3 mode:(unsigned long long)a4;
- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)tabBarDidChangeNotification:(id)a0;
- (void)dissmissStickerIconIfNeedWithAnimation:(BOOL)a0;
- (id)aAWELiteStudioModuleAdapter;
- (void)showQuickStoryGuideOnInitialFetchIfNeededWithContext:(id)a0;
- (void)resetIsFirstVideoAfterLaunchWithFeedIndex:(long long)a0 awemeType:(long long)a1;
- (void)didSwitchTabNotification:(id)a0;
- (id)aAWEDSStudioAdapter;
- (BOOL)showNewPropIconWithModel:(id)a0;
- (BOOL)showTemplateIconWithModel:(id)a0;
- (BOOL)isExceedLimitForStickerIconWithMode:(unsigned long long)a0;
- (BOOL)isPlusIconShowing;
- (BOOL)shouldShowStickerIcon;
- (id)imagePretreatmentWithOriginImage:(id)a0 mode:(unsigned long long)a1;
- (void)iconClickJumpWith:(unsigned long long)a0 aweme:(id)a1 referString:(id)a2 interactionViewController:(id /* block */)a3;
- (id)p_addBorderForCustomPropIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)addCornerRadiusWithImage:(id)a0;
- (void)trackStickerIconGuideShowWithStickerId:(id)a0 isShow:(BOOL)a1 reasonStr:(id)a2;
- (BOOL)shouldShowStickerIconWhenNewProp:(id)a0;
- (void)transferToQuickStoryCameraWithReferString:(id)a0 enterMethod:(id)a1 stickerID:(id)a2 isFromPlusIcon:(BOOL)a3 awemeModel:(id)a4;
- (void)recordShowStickerIcon:(id)a0 withMode:(unsigned long long)a1;
- (id)p_dealWithImageForFeedCreationCard:(id)a0;
- (BOOL)isShowingStickerIcon;
- (void)showIconIfNeedWithUrlList:(id)a0 aweme:(id)a1 referString:(id)a2 mode:(unsigned long long)a3;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (id)currentModel;

@end
