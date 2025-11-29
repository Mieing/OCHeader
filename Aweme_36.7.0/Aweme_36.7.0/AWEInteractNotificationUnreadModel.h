@class AWEURLModel, NSString, NSArray, AWEUserModel, AWEInteractNotificationUnreadLiveActivityInfoModel;

@interface AWEInteractNotificationUnreadModel : MTLModel <AWEInteractNotificationProtocol, MTLJSONSerializing>

@property (nonatomic) long long group;
@property (nonatomic) long long count;
@property (nonatomic) long long level;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) AWEInteractNotificationUnreadLiveActivityInfoModel *liveActivityInfo;
@property (retain, nonatomic) AWEURLModel *followAvatarInfo;
@property (copy, nonatomic) NSString *followUserId;
@property (copy, nonatomic) NSString *followUserNickname;
@property (copy, nonatomic) NSString *followUserItemId;
@property (copy, nonatomic) NSString *followNoticeText;
@property (nonatomic) long long bubbleStyle;
@property (copy, nonatomic) NSArray *bubbleImage;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *interposeRoomIDList;
@property (copy, nonatomic) NSString *insertAwemeIDs;
@property (nonatomic) long long highValueOrRecentFollowLiveCount;
@property (nonatomic) long long notHighValueOrRecentFollowLiveCount;
@property (nonatomic) long long highValueUpdateCount;
@property (nonatomic) long long specialFollowSkylightStrategy;
@property (nonatomic) long long yellowDotConfigType;
@property (nonatomic) long long yellowDotConfigNumber;
@property (copy, nonatomic) NSString *yellowDotConfigText;
@property (nonatomic) long long yellowDotConfigDuration;
@property (copy, nonatomic) NSString *yellowDotConfigName;
@property (copy, nonatomic) NSString *yellowDotComponentID;
@property (nonatomic) BOOL hasYellowDotData;
@property (nonatomic) BOOL isConsume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
