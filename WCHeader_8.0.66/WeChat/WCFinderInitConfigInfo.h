@class FinderDescCarouselConfig, FinderStreamConfig, FinderUploadGetTempUrl, FinderJumpInfo_LiteApp, FinderYuanbaoConfig, FinderLiveMentionReddotSwitch, NSString, FinderJoinLiveVisibleInfo, FinderSnsCreateUserInfo, FinderFriendTabConfig, NewLifeConfig, FinderTeenModeSetting, FinderPlaceHolderConfig, FinderOfflineModeConfig, LongVideoInfo, FinderVideoTemplateConfig, FinderInteractionMileStoneConfig, FinderRedDotExposeInfoConfig, FinderNicknameCustomCharacters, PCFinderExptInfo, FinderHelpPromotionConfig, FinderRingtoneConfig, FinderTeenModeTipsConfig, FinderWxPersonalizedSetting, FinderCheckPrefetchConfig, FinderReddotEnhanceConfig, SimpleCommonConfig;

@interface WCFinderInitConfigInfo : NSObject

@property (nonatomic) double commentImageCompressRate;
@property (nonatomic) double commentImageMaxSize;
@property (copy, nonatomic) NSString *commentImageCompressResolution;
@property (retain, nonatomic) FinderTeenModeTipsConfig *teenmodeTipsConfig;
@property (nonatomic) unsigned int retryDelaySecond;
@property (retain, nonatomic) FinderTeenModeSetting *teenmodeSetting;
@property (retain, nonatomic) FinderWxPersonalizedSetting *wxPersonalizedSetting;
@property (retain, nonatomic) FinderRingtoneConfig *ringtoneConfig;
@property (retain, nonatomic) FinderDescCarouselConfig *carouselConfig;
@property (retain, nonatomic) NewLifeConfig *newlifeConfig;
@property (nonatomic) unsigned int pcCardShowStyle;
@property (retain, nonatomic) FinderSnsCreateUserInfo *snsCreateUserInfo;
@property (retain, nonatomic) FinderCheckPrefetchConfig *finderCheckPrefetchConf;
@property (retain, nonatomic) FinderStreamConfig *finderStreamConfig;
@property (retain, nonatomic) FinderOfflineModeConfig *finderOfflineModeConfig;
@property (retain, nonatomic) PCFinderExptInfo *pcFinderExptInfo;
@property (nonatomic) BOOL usefindergetcommentlist;
@property (retain, nonatomic) FinderNicknameCustomCharacters *nicknameCustomCharacters;
@property (nonatomic) BOOL needFaceVerify;
@property (retain, nonatomic) LongVideoInfo *longvideoInfo;
@property (retain, nonatomic) FinderUploadGetTempUrl *uploadGetTempUrl;
@property (retain, nonatomic) FinderHelpPromotionConfig *helpPromotionConfig;
@property (retain, nonatomic) FinderRedDotExposeInfoConfig *reddotExposeInfoConfig;
@property (nonatomic) unsigned int useNewNoticeIconStyleInFeed;
@property (nonatomic) unsigned int supportCommentRecommend;
@property (retain, nonatomic) FinderPlaceHolderConfig *finderPlaceHolderConf;
@property (retain, nonatomic) FinderJoinLiveVisibleInfo *joinliveVisibleInfo;
@property (retain, nonatomic) FinderFriendTabConfig *friendTabConfig;
@property (retain, nonatomic) SimpleCommonConfig *simpleCommonConfig;
@property (nonatomic) BOOL supportCommentEmoticon;
@property (nonatomic) BOOL supportImageComment;
@property (copy, nonatomic) FinderYuanbaoConfig *finderYuanbaoConfig;
@property (retain, nonatomic) FinderJumpInfo_LiteApp *personalmsgComplainLiteappInfo;
@property (retain, nonatomic) FinderJumpInfo_LiteApp *productComplainLiteappInfo;
@property (retain, nonatomic) FinderLiveMentionReddotSwitch *finderLiveMentionReddotSwitch;
@property (retain, nonatomic) FinderVideoTemplateConfig *finderVideoTemplateConfig;
@property (retain, nonatomic) FinderReddotEnhanceConfig *finderReddotEnhanceConfig;
@property (nonatomic) BOOL shortVideoBulletComment;
@property (retain, nonatomic) FinderInteractionMileStoneConfig *interactionMilestoneConfig;

- (double)safeGetCommentImageCompressRate;
- (double)safeGetCommentImageMaxSize;
- (id)safeGetCommentImageCompressResolution;
- (id)initWithConfigArray:(id)a0;
- (void)updateConfigInfoWithItemArray:(id)a0;
- (void)resetDefault;
- (void)_updateConfigInfoWithItemArray:(id)a0;
- (id)getValueWithClass:(Class)a0 configValue:(id)a1;
- (id)getStringValueFromData:(id)a0;
- (id)convertCamelFromUnderline:(id)a0;
- (void)voidFunctionWithConfigItem:(id)a0;
- (id)customMapDict;
- (id)customPropertyKeyMap:(id)a0;
- (void).cxx_destruct;

@end
