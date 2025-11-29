@class HTSLiveRoom, NSString, RecordResponse_BattleRecord_SeasonInfo, RecordResponse_BattleRecord_FeedbackInfo, BattleUserInfo;

@interface RecordResponse_BattleRecord : IESLivePBBaseMessage

@property (retain, nonatomic) BattleUserInfo *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) long long battleStartTime;
@property (nonatomic) long long rivalLivingRoomId;
@property (nonatomic) int battleResultType;
@property (nonatomic) long long ownHistoricRoomId;
@property (nonatomic) long long channelId;
@property (nonatomic) long long matchType;
@property (copy, nonatomic) NSString *rivalSecUserId;
@property (retain, nonatomic) HTSLiveRoom *rivalLivingRoom;
@property (nonatomic) BOOL hasRivalLivingRoom;
@property (copy, nonatomic) NSString *signExtra;
@property (nonatomic) int followType;
@property (nonatomic) int increaseOrDecreaseInvite;
@property (nonatomic) BOOL inviteRejectPermanent;
@property (nonatomic) long long allCount;
@property (nonatomic) long long winCount;
@property (nonatomic) long long loseCount;
@property (copy, nonatomic) NSString *battleAttachedInfo;
@property (retain, nonatomic) RecordResponse_BattleRecord_FeedbackInfo *feedbackInfo;
@property (nonatomic) BOOL hasFeedbackInfo;
@property (copy, nonatomic) NSString *battleId;
@property (nonatomic) BOOL inviteRejectTemporary;
@property (copy, nonatomic) NSString *channelIdStr;
@property (retain, nonatomic) RecordResponse_BattleRecord_SeasonInfo *seasonInfo;
@property (nonatomic) BOOL hasSeasonInfo;
@property (nonatomic) int playMode;
@property (copy, nonatomic) NSString *rivalOpenId;

+ (id)descriptor;

@end
