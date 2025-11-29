@class AWENoticePreloadModel, NSString, NSDictionary, NSArray;

@interface AWEIMInteractNotificationCountModel : IESIMBaseApiModel

@property (nonatomic) long long group;
@property (nonatomic) long long showType;
@property (nonatomic) unsigned long long interactiveNoticeShowType;
@property (nonatomic) long long demoteState;
@property (copy, nonatomic) NSString *feedSourceType;
@property (nonatomic) long long clearReadCount;
@property (nonatomic) long long count;
@property (nonatomic) long long sk2Count;
@property (nonatomic) long long obdCount;
@property (nonatomic) long long friendsApplyCount;
@property (nonatomic) long long dotCount;
@property (nonatomic) long long totalUnreadCount;
@property (retain, nonatomic) AWENoticePreloadModel *preloadInfo;
@property (nonatomic) long long showScope;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *socketExtra;
@property (copy, nonatomic) NSArray *noticeCount;
@property (copy, nonatomic) NSArray *noticeCountV2;
@property (copy, nonatomic) NSDictionary *templateCount;
@property (copy, nonatomic) NSArray *notices;
@property (nonatomic) double pushTime;
@property (nonatomic) BOOL needBackup;
@property (copy, nonatomic) NSString *livePushType;
@property (nonatomic) double latestTime;
@property (nonatomic) long long closeFriendCount;
@property (copy, nonatomic) NSString *insertAwemeIDs;
@property (nonatomic) long long highValueOrRecentFollowLiveCount;
@property (nonatomic) long long notHighValueOrRecentFollowLiveCount;
@property (nonatomic) long long highValueUpdateCount;
@property (nonatomic) long long specialFollowSkylightStrategy;
@property (nonatomic) BOOL needReqSocialCount;
@property (nonatomic) long long delNoticeType;
@property (retain, nonatomic) NSDictionary *bubbleInfo;
@property (nonatomic) BOOL hasCaption;
@property (nonatomic) long long yellowDotConfigType;
@property (nonatomic) long long yellowDotConfigNumber;
@property (copy, nonatomic) NSString *yellowDotConfigText;
@property (nonatomic) long long yellowDotConfigDuration;
@property (copy, nonatomic) NSString *yellowDotConfigName;
@property (copy, nonatomic) NSString *yellowDotComponentID;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
