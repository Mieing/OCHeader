@class FinderMcnInfo, FinderMusicStatisticsInfo, FinderCollectionListInfo, NSMutableArray, FinderLiveNextLiveNotificationInfo, FinderMusicRadio, NSString, WCFinderProfileMemberShipInfo, WCFinderIpRegionInfo, FinderOriginal, WCFinderContactServiceMenuMutableArray, FinderProfileBanner, FinderUserPageRecentUpdatesInfo, WCFinderProfileOverviewCache, FinderUserPageSectionQAInfo, FinderJumpInfo, FinderClubInfo, FinderFeedBriefInfo, WCFinderProfilePostTipsInfo, FinderFollowedNicknameUpdateInfo, FinderUserPageSignatureFoldInfo, FinderMileStone;

@interface WCFinderStreamProfileExtInfoInnerModel : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) FinderMcnInfo *mcnInfo;
@property (retain, nonatomic) WCFinderContactServiceMenuMutableArray *serviceMenu;
@property (retain, nonatomic) FinderCollectionListInfo *collectionInfo;
@property (retain, nonatomic) WCFinderIpRegionInfo *attrRegionInfo;
@property (retain, nonatomic) FinderClubInfo *clubInfo;
@property (retain, nonatomic) FinderOriginal *originalInfo;
@property (retain, nonatomic) FinderJumpInfo *storeJumpInfo;
@property (retain, nonatomic) WCFinderProfileMemberShipInfo *memberShipInfo;
@property (retain, nonatomic) WCFinderProfileOverviewCache *overviewCache;
@property (retain, nonatomic) FinderMusicStatisticsInfo *statisticsInfo;
@property (retain, nonatomic) FinderProfileBanner *warningBanner;
@property (retain, nonatomic) FinderUserPageSectionQAInfo *qaInfo;
@property (nonatomic) double allTabQASectionCacheHeight;
@property (nonatomic) double allTabQASectionCacheWidth;
@property (retain, nonatomic) NSMutableArray *tabList;
@property (retain, nonatomic) NSMutableArray *authorTabList;
@property (retain, nonatomic) FinderMusicRadio *musicRadio;
@property (nonatomic) unsigned long long extFlag;
@property (retain, nonatomic) FinderMileStone *milestone;
@property (retain, nonatomic) FinderFeedBriefInfo *briefInfo;
@property (retain, nonatomic) WCFinderProfilePostTipsInfo *postTipsInfo;
@property (retain, nonatomic) FinderUserPageSignatureFoldInfo *signatureFoldInfo;
@property (retain, nonatomic) FinderFollowedNicknameUpdateInfo *followedNicknameInfo;
@property (retain, nonatomic) FinderLiveNextLiveNotificationInfo *nextLiveNoticeInfo;
@property (nonatomic) long long guardNowMode;
@property (retain, nonatomic) FinderUserPageRecentUpdatesInfo *recentUpdateInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mcnInfo;
+ (void)PBArrayAdd_serviceMenu;
+ (void)PBArrayAdd_collectionInfo;
+ (void)PBArrayAdd_attrRegionInfo;
+ (void)PBArrayAdd_clubInfo;
+ (void)PBArrayAdd_storeJumpInfo;
+ (void)PBArrayAdd_memberShipInfo;
+ (void)PBArrayAdd_overviewCache;
+ (void)PBArrayAdd_originalInfo;
+ (void)PBArrayAdd_statisticsInfo;
+ (void)PBArrayAdd_warningBanner;
+ (void)PBArrayAdd_qaInfo;
+ (void)PBArrayAdd_allTabQASectionCacheHeight;
+ (void)PBArrayAdd_tabList;
+ (void)PBArrayAdd_musicRadio;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_milestone;
+ (void)PBArrayAdd_briefInfo;
+ (void)PBArrayAdd_postTipsInfo;
+ (void)PBArrayAdd_authorTabList;
+ (void)PBArrayAdd_signatureFoldInfo;
+ (void)PBArrayAdd_followedNicknameInfo;
+ (void)PBArrayAdd_guardNowMode;
+ (void)PBArrayAdd_recentUpdateInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
