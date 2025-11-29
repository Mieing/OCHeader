@class NSString, FinderLiveNoticeListInfo;

@interface WCFinderMembershipAuthorMemberInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long memberCount;
@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (copy, nonatomic) NSString *memberCenterURL;
@property (nonatomic) unsigned long long unreadDynamicNum;
@property (nonatomic) unsigned long long totalFeedNum;
@property (nonatomic) unsigned long long totalLiveNum;
@property (nonatomic) unsigned long long totalDynamicNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_memberCount;
+ (void)PBArrayAdd_liveNoticeListInfo;
+ (void)PBArrayAdd_memberCenterURL;
+ (void)PBArrayAdd_unreadDynamicNum;
+ (void)PBArrayAdd_totalFeedNum;
+ (void)PBArrayAdd_totalLiveNum;
+ (void)PBArrayAdd_totalDynamicNum;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

@end
