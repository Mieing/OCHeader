@class NSString, FinderLiveNoticeListInfo;

@interface WCFinderMembershipVisitorMemberInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *finderMemberTicket;
@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (nonatomic) unsigned long long unreadFeedNum;
@property (nonatomic) unsigned long long unreadLiveNum;
@property (nonatomic) unsigned long long unreadDynamicNum;
@property (nonatomic) unsigned long long totalFeedNum;
@property (nonatomic) unsigned long long totalLiveNum;
@property (nonatomic) unsigned long long totalDynamicNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_finderMemberTicket;
+ (void)PBArrayAdd_liveNoticeListInfo;
+ (void)PBArrayAdd_totalFeedNum;
+ (void)PBArrayAdd_totalLiveNum;
+ (void)PBArrayAdd_totalDynamicNum;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

@end
