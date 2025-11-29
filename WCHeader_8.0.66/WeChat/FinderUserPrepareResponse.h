@class FinderContact, AcctTransferConfig, AgencyCollaborateInfo, FinderWxAppInfo, BaseResponse, NSMutableArray, PostActionSheetList, PostActionWording, NSString, SettleToAgencyRelateInfo, FinderNicknameVerifyInfo, FinderPrivacySetting, FinderLiveNoticeListInfo, GameRankSwitchInfo, JoinLiveInvisiableSwitchInfo, DataCenterConfig, AccountExtraSettingConfig, FinderUserPreparePoiInfo, FinderLiveWxaPreloadInfo;

@interface FinderUserPrepareResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo;
@property (retain, nonatomic) FinderContact *selfContact;
@property (nonatomic) unsigned int userFlag;
@property (retain, nonatomic) NSString *nicknameModifyWording;
@property (retain, nonatomic) NSString *noPostPrivilegeTitle;
@property (retain, nonatomic) NSString *noPostPrivilegeDesc;
@property (nonatomic) unsigned int signatureMinLength;
@property (nonatomic) unsigned int signatureMaxLength;
@property (nonatomic) unsigned int nicknameMinLength;
@property (nonatomic) unsigned int nicknameMaxLength;
@property (retain, nonatomic) DataCenterConfig *datacenterConf;
@property (nonatomic) unsigned int likedTotalCount;
@property (nonatomic) unsigned int favTotalCount;
@property (retain, nonatomic) NSString *realnameUrl;
@property (retain, nonatomic) FinderWxAppInfo *wxaShopBindUrl;
@property (retain, nonatomic) FinderWxAppInfo *wxaShopInfo;
@property (nonatomic) unsigned int liveGlobalFlag;
@property (retain, nonatomic) AcctTransferConfig *acctTransferConf;
@property (retain, nonatomic) PostActionSheetList *actionList;
@property (nonatomic) unsigned int livePrivilegesFlag;
@property (retain, nonatomic) NSString *creatorCentorUrl;
@property (nonatomic) unsigned int foreignUserFlag;
@property (retain, nonatomic) NSString *acctDetailUrl;
@property (retain, nonatomic) AccountExtraSettingConfig *acctExtSettingConfig;
@property (nonatomic) unsigned int logoutLock;
@property (retain, nonatomic) NSString *logoutUrl;
@property (retain, nonatomic) NSMutableArray *aliasInfo;
@property (nonatomic) unsigned int currentAliasRoleType;
@property (nonatomic) unsigned long long nextAliasModAvailableTime;
@property (nonatomic) int userNoFinder;
@property (retain, nonatomic) NSString *nicknameModifyRestCountNotice;
@property (retain, nonatomic) SettleToAgencyRelateInfo *settleInfo;
@property (retain, nonatomic) FinderUserPreparePoiInfo *poiInfo;
@property (retain, nonatomic) AgencyCollaborateInfo *agencyCollaborateInfo;
@property (nonatomic) unsigned int purchasedTotalCount;
@property (retain, nonatomic) PostActionWording *actionWording;
@property (retain, nonatomic) FinderLiveWxaPreloadInfo *shopWindowPreload;
@property (retain, nonatomic) GameRankSwitchInfo *gameLiveSwitchInfo;
@property (retain, nonatomic) FinderPrivacySetting *privacySetting;
@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (retain, nonatomic) JoinLiveInvisiableSwitchInfo *joinliveInvisiableSwitch;
@property (retain, nonatomic) FinderWxAppInfo *wxaShopCouponInfo;

+ (void)initialize;

@end
