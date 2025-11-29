@class NSDictionary, NSString;

@interface AWEIMMixPhotoConfigurationManager : NSObject <AWEIMMixPhotoConfigurationManagerInterface>

@property (readonly, nonatomic) NSDictionary *p_styleListMap;
@property (readonly, nonatomic) NSDictionary *p_imageUrl;
@property (readonly, nonatomic) NSDictionary *p_textForPrivateChat;
@property (readonly, nonatomic) NSDictionary *p_textForGroupChat;
@property (readonly, copy, nonatomic) NSDictionary *p_textConfig;
@property (readonly, nonatomic) NSDictionary *p_config;
@property (readonly, nonatomic) NSDictionary *p_msgButtonTitleNotJoinConfigV2;
@property (readonly, nonatomic) NSDictionary *p_msgButtonTitleHasJoinConfigV2;
@property (readonly, nonatomic) NSDictionary *p_msgContentTitleConfigV2;
@property (readonly, nonatomic) NSDictionary *p_launchPanelConfigV2;
@property (readonly, nonatomic) NSDictionary *p_mixDetailConfigV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)cyclePlayAnimatedEnabled;
- (BOOL)progressPreviewEnabled;
- (id)textWithScene:(long long)a0 chatType:(unsigned long long)a1;
- (id)toastWhenWholeFuncDisabled;
- (BOOL)mixPhotoEnable;
- (BOOL)publishEnabled;
- (double)feedAutoPlayInterval;
- (int)messageExpiredDays;
- (int)bannerExpiredDays;
- (int)effectAnchorID;
- (id)messageCardTitleColor;
- (id)messageCardSubTitleColor;
- (id)historyCardSubTitleColor;
- (id)messageCardButtonTitle;
- (BOOL)enableMixMessageShare;
- (BOOL)enableLoraMixMessagePublish;
- (id)mixDetailTitle;
- (id)mixDetailGanSubTitle;
- (id)mixDetailButtonTitle:(unsigned long long)a0;
- (id)mixDetailExpireStateInfo;
- (id)mixDetailFailStateInfo;
- (id)mixDetailStatusTitleWaitTime:(long long)a0;
- (id)imageUrlWithScene:(long long)a0;
- (BOOL)enableMessageCardAndStyleCardJumpScheme;
- (id)msgButtonTitleStatus:(long long)a0 hasJoin:(BOOL)a1;
- (id)msgContentTitleV2MixStatus:(long long)a0;
- (id)launchPanelTitleEnableLoraAI:(BOOL)a0;
- (id)mixDetailLoraInfoTitle:(BOOL)a0;
- (id)p_localStyleListMap;
- (id)p_localDefaultTextForGroupChat;
- (id)p_localDefaultTextForPrivateChat;
- (id)p_localDefaultConfig;
- (id)msgButtonTitleNotJoinConfig;
- (id)msgButtonTitleHasJoinConfig;
- (id)msgContentTitleConfigV2;
- (id)launchPanelConfigV2;
- (id)mixDetailConfigV2;
- (id)mixPhotoDisableToast;
- (id)p_textSceneEnumToString:(long long)a0;
- (id)p_imageSceneEnumToString:(long long)a0;
- (id)p_colorWithValue:(id)a0 defaultValue:(id)a1;
- (id)styleListWithJoinerCount:(int)a0;
- (BOOL)enableMixMessageNoticeTrigSync;
- (id)sharePanelActivitySubTitle;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)autoPlayEnabled;

@end
