@class NSString, FinderLiveNoticeListInfo;

@interface FetchFinderMemberShipDetailInfoResponse_VisitorMemberInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderMemberTicket;
@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (nonatomic) unsigned int unreadFeedNum;
@property (nonatomic) unsigned int unreadLiveNum;
@property (nonatomic) unsigned int unreadDynamicNum;
@property (nonatomic) unsigned int totalFeedNum;
@property (nonatomic) unsigned int totalLiveNum;
@property (nonatomic) unsigned int totalDynamicNum;

+ (void)initialize;

@end
