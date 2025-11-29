@class NSString, FinderLiveNoticeListInfo;

@interface FetchFinderMemberShipDetailInfoResponse_AuthorMemberInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long memberCount;
@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (retain, nonatomic) NSString *memberCenterUrl;
@property (nonatomic) unsigned int unreadDynamicNum;
@property (nonatomic) unsigned int totalFeedNum;
@property (nonatomic) unsigned int totalLiveNum;
@property (nonatomic) unsigned int totalDynamicNum;

+ (void)initialize;

@end
