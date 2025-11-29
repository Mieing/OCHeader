@class FinderLiveAnchorStat, FinderMcnInfo, NSMutableArray, NSString, FinderMusicRadio, FinderLiveNextLiveNotificationInfo, FinderContact, BaseResponse, FinderIpRegionInfo, FinderOriginal, FinderUserPagePoi, FinderProfileBanner, FinderUserPageRecentUpdatesInfo, FinderUserProtectionInfo, FinderBizInfo, FinderJumpInfo, FinderClubInfo, FinderFeedBriefInfo, FinderUserPageTabList, FinderUserPageSignatureFoldInfo, FinderNicknameVerifyInfo, FinderFollowedNicknameUpdateInfo, FinderLiveNoticeListInfo, FinderMileStone;

@interface FinderUserPageHeaderResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderContact *contact;
@property (retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo;
@property (nonatomic) unsigned int fansCount;
@property (nonatomic) unsigned int friendFollowCount;
@property (retain, nonatomic) NSMutableArray *userTags;
@property (nonatomic) unsigned int privateLock;
@property (nonatomic) unsigned int logoutLock;
@property (retain, nonatomic) NSString *logoutUrl;
@property (retain, nonatomic) FinderBizInfo *bizInfo;
@property (retain, nonatomic) NSMutableArray *eventInfoList;
@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (retain, nonatomic) FinderLiveAnchorStat *anchorStat;
@property (retain, nonatomic) FinderIpRegionInfo *ipRegionInfo;
@property (retain, nonatomic) FinderMcnInfo *mcnInfo;
@property (nonatomic) unsigned int mvObjectMoveFlag;
@property (retain, nonatomic) FinderIpRegionInfo *attrRegionInfo;
@property (retain, nonatomic) FinderClubInfo *clubInfo;
@property (retain, nonatomic) FinderOriginal *originalInfo;
@property (retain, nonatomic) FinderJumpInfo *productInfo;
@property (retain, nonatomic) FinderUserPageTabList *tabList;
@property (retain, nonatomic) FinderProfileBanner *profileBanner;
@property (retain, nonatomic) FinderUserPagePoi *poiInfo;
@property (retain, nonatomic) FinderMusicRadio *radio;
@property (retain, nonatomic) FinderMileStone *mileStone;
@property (retain, nonatomic) FinderFeedBriefInfo *feedBriefInfo;
@property (nonatomic) unsigned int memberStatus;
@property (retain, nonatomic) FinderUserPageSignatureFoldInfo *signatureFoldInfo;
@property (retain, nonatomic) FinderFollowedNicknameUpdateInfo *followedNicknameInfo;
@property (retain, nonatomic) FinderLiveNextLiveNotificationInfo *nextLiveNotificationInfo;
@property (retain, nonatomic) FinderUserProtectionInfo *userProtectionInfo;
@property (retain, nonatomic) FinderJumpInfo *searchJumpInfo;
@property (retain, nonatomic) FinderUserPageRecentUpdatesInfo *recentUpdateInfo;

+ (void)initialize;

@end
