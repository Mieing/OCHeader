@class DUXBadgeViewConfig, NSString, AWEHPBottomTabUIConfigModel, AWEHPTabElementConfigModel, AWEHPTopBarMaskConfig, AWEHPTopTabTooBrightOptConfig;

@interface AWEHPTabUIConfigManager : NSObject <AWEHPTabUIConfigManagerProtocol>

@property (nonatomic) BOOL homepageAdaptEnable;
@property (retain, nonatomic) AWEHPTabElementConfigModel *config;
@property (retain, nonatomic) AWEHPBottomTabUIConfigModel *bottomConfig;
@property (retain, nonatomic) AWEHPTopBarMaskConfig *maskConfig;
@property (retain, nonatomic) DUXBadgeViewConfig *topBadgeConfig;
@property (retain, nonatomic) DUXBadgeViewConfig *topCountBadgeConfig;
@property (retain, nonatomic) DUXBadgeViewConfig *topTextBadgeConfig;
@property (retain, nonatomic) DUXBadgeViewConfig *bottomBadgeConfig;
@property (retain, nonatomic) DUXBadgeViewConfig *bottomCountConfig;
@property (retain, nonatomic) DUXBadgeViewConfig *bottomTextBadgeConfig;
@property (retain, nonatomic) AWEHPTopTabTooBrightOptConfig *tooBrightOptConfig;
@property (nonatomic) long long innerViewLayoutStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)replacePlayerMaskEnable;
- (id)tabBottomConfig;
- (BOOL)topTabTooBrightOptEnable;
- (double)topBarCTAFloat:(double)a0;
- (id)tabElementConfig;
- (double)getTopTabRatio;
- (double)getTopBarCTARatio;
- (double)topBarTabFloat:(double)a0;
- (void)p_initConfig;
- (id)getTooBrightOptMaskConfigWithBrightness:(id)a0;
- (id)getTooBrightOptTabConfigWithBrightness:(id)a0;
- (id)topBarMaskConfigWithChannelID:(id)a0;
- (void)p_initTopTabTooBrightOptConfig;
- (BOOL)p_trySetupSettingsConfig;
- (void)p_setupDefaultConfig;
- (id)p_getConfigWithConfigs:(id)a0 scale:(double)a1;
- (id)p_defaultConfigArray;
- (id)bottomCountBadgeConfig;
- (double)getTopBubbleRatio;
- (double)getBottomBubbleRatio;
- (double)bottomTabVerticalStyleIconHeight;
- (double)bottomTabAvatarIconSize;
- (double)bottomTabVerticalStyleFontSize;
- (long long)bottomTabVerticalStyleFontWeight;
- (long long)bottomTabInnerViewLayoutStyle;
- (double)bottomTabVerticalStyleTopMargin;
- (double)bottomTabVerticalStyleInnerGapY;
- (double)bottomTabPureIconStyleIconHeight;
- (double)getBottomBarRatio;
- (BOOL)shouldHidePlayerTopMaskWithChannelID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
