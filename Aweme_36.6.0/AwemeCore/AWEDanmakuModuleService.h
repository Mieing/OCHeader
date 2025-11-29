@class NSString;

@interface AWEDanmakuModuleService : HTSService <AWEDanmakuModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)danmakuAuthorLabelImageName;
+ (BOOL)enableSupportDanmakuEgg;
+ (long long)danmakuSettingPanelStyle;
+ (id)danmakuIconName:(BOOL)a0;
+ (Class)danmakuTrackManager;
+ (double)getDanmakuTopMargin;
+ (double)danmakuGuideAnimationDuration;
+ (id)getPostDeniedReasonWithModel:(id)a0;
+ (id)defaultPlaceholderWithModel:(id)a0;
+ (BOOL)canCurrentUserPostDanmakuWithModel:(id)a0;
+ (void)danmakuPrivilegeCheckWithCompletion:(id /* block */)a0;
+ (BOOL)enableSingleVideoDanmakuSwitchClose;
+ (long long)danmakuInputSwitchGuideTimes;
+ (BOOL)globalVideoCloseEnable;
+ (void)toastCloseDanmakuTextIfNeed:(id)a0;
+ (BOOL)danmakuSwitchStateWithGroupID:(id)a0;
+ (double)getDanmakuContainerBottomYWithTrackIndex:(long long)a0;
+ (BOOL)enableDanmakuInputGuide;
+ (BOOL)enableDanmakuSmartModeMask;
+ (long long)danmakuInputGuideStyle;
+ (long long)danmakuInputGuideTimes;
+ (id)danmakuInputGuideLottieView;
+ (void)updateDanmakuPrivilege:(id)a0 level:(long long)a1 completion:(id /* block */)a2;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEDanmakuCommonAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
+ (BOOL)enableAuthorSupportVerticalDanmaku;
+ (long long)maxDanmakuInputLimit;

- (id)aAWEPadModuleAdapter;
- (id)danmakuSettingManager;
- (BOOL)enableAWEDanmakuFeedControllerLazyLoad;
- (id)danmakuSettingsVCWithScene:(unsigned long long)a0 showMaskSwitch:(BOOL)a1 supportShowMask:(BOOL)a2 shouldShowDanmakuManager:(BOOL)a3 delegate:(id)a4;
- (BOOL)shouldShowDanmakuWithAwemeModel:(id)a0 referString:(id)a1 enterFrom:(id)a2;
- (BOOL)shouldShowDanmakuConfigWithAwemeModel:(id)a0 referString:(id)a1 enterFrom:(id)a2;
- (id)danmakuListVCWithScene:(unsigned long long)a0 model:(id)a1;
- (id)danmakuShieldVCWithScene:(unsigned long long)a0;
- (id)lsOptimizeDanmakuControllerWithDelegate:(id)a0 enterFrom:(id)a1;
- (id)danmakuContainerControllerWithContext:(id)a0 trackLayerConfig:(id)a1;
- (id)danmakuContextWithUseCommonDanmakuSwitch:(BOOL)a0;
- (id)guidePopoverViewWithTapBlock:(id /* block */)a0;
- (id)danmakuInputContextWithHunterParams:(id)a0;
- (id)aAWEPlayInteractionAdapter;
- (id)aAWEDanmakuCommonAdapter;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;

@end
