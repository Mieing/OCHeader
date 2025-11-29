@class FinderLiveAnchorStat, FinderMcnInfo, FinderUserpageAdInfo, NextLiveNotificationButton, FinderCollectionListInfo, NSMutableArray, OriginalEntranceInfo, FinderLiveNoticeInfo, NSString, FinderContact, FinderMusicRadio, BaseResponse, FinderIpRegionInfo, FinderOriginal, FinderUserPagePoi, FinderProfileBanner, NSData, FinderUserPageSectionQAInfo, FinderBizInfo, FinderJumpInfo, FinderClubInfo, FinderWxAppInfo, FinderLayoutConfig, FinderFeedBriefInfo, FinderUserInfo, FinderPreloadInfo, FinderNicknameVerifyInfo, FinderJustWatchControl, FinderLiveNoticeListInfo, FinderMileStone;

@interface FinderUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (retain, nonatomic) FinderUserInfo *finderUserInfo;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int feedsCount;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo;
@property (nonatomic) unsigned int fansCount;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int friendFollowCount;
@property (retain, nonatomic) NSMutableArray *userTags;
@property (nonatomic) unsigned int originalEntranceFlag;
@property (retain, nonatomic) OriginalEntranceInfo *entranceInfo;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (retain, nonatomic) NSMutableArray *liveObjects;
@property (nonatomic) unsigned int privateLock;
@property (retain, nonatomic) FinderWxAppInfo *wxaShopInfo;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (retain, nonatomic) NSMutableArray *usualTopics;
@property (nonatomic) unsigned int liveDurationHours;
@property (nonatomic) unsigned int logoutLock;
@property (retain, nonatomic) NSString *acctDetailEntrance;
@property (retain, nonatomic) NSString *loggingoutWording;
@property (retain, nonatomic) FinderUserPagePoi *poiInfo;
@property (retain, nonatomic) NSString *logoutUrl;
@property (retain, nonatomic) FinderBizInfo *bizInfo;
@property (retain, nonatomic) NSMutableArray *eventInfoList;
@property (retain, nonatomic) FinderJustWatchControl *justWatch;
@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (retain, nonatomic) NSMutableArray *jumpInfo;
@property (nonatomic) BOOL hasAcctRecommend;
@property (retain, nonatomic) FinderLiveAnchorStat *anchorStatInfo;
@property (retain, nonatomic) FinderIpRegionInfo *ipRegionInfo;
@property (retain, nonatomic) FinderMcnInfo *mcnInfo;
@property (nonatomic) unsigned int mvObjectMoveFlag;
@property (retain, nonatomic) FinderCollectionListInfo *collectionListInfo;
@property (retain, nonatomic) FinderIpRegionInfo *attrRegionInfo;
@property (retain, nonatomic) FinderClubInfo *clubInfo;
@property (retain, nonatomic) FinderOriginal *originalInfo;
@property (retain, nonatomic) FinderJumpInfo *productInfo;
@property (nonatomic) unsigned int feedsGlobalFavCount;
@property (nonatomic) unsigned int feedsFavCount;
@property (retain, nonatomic) FinderLayoutConfig *layoutConfig;
@property (retain, nonatomic) FinderProfileBanner *profileBanner;
@property (retain, nonatomic) FinderUserPageSectionQAInfo *qaInfo;
@property (nonatomic) unsigned int feedsChatroomPushCount;
@property (retain, nonatomic) FinderMusicRadio *radio;
@property (retain, nonatomic) FinderMileStone *mileStone;
@property (retain, nonatomic) FinderFeedBriefInfo *feedBriefInfo;
@property (retain, nonatomic) FinderUserpageAdInfo *adInfo;
@property (nonatomic) unsigned int memberStatus;
@property (nonatomic) unsigned int feedsLikeCount;
@property (nonatomic) unsigned int feedsForwardCount;
@property (nonatomic) unsigned int upContinueFlag;
@property (retain, nonatomic) NSData *upLastbuffer;
@property (retain, nonatomic) NextLiveNotificationButton *nextLiveNotificationButton;

+ (void)initialize;

@end
