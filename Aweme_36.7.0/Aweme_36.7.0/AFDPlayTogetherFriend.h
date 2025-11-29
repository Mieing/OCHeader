@class NSString, AWELiveRoomModel, AWEURLModel;

@interface AFDPlayTogetherFriend : AWEBaseApiModel

@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *secUid;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *remarkName;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL isOnline;
@property (nonatomic) unsigned long long friendType;
@property (nonatomic) unsigned long long linkmicDays;
@property (nonatomic) BOOL hasInvited;
@property (nonatomic) long long invitedCount;
@property (nonatomic) double lastInvitedTime;
@property (retain, nonatomic) AWELiveRoomModel *roomModel;
@property (nonatomic) unsigned long long inviteStatus;
@property (nonatomic) BOOL hasDisplayedInView;
@property (nonatomic) unsigned long long invitePage;
@property (nonatomic) long long linkDays;

+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
