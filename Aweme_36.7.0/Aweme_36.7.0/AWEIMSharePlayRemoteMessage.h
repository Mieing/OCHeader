@class NSString, NSArray;

@interface AWEIMSharePlayRemoteMessage : AWEIMMessage

@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *ownerUid;
@property (retain, nonatomic) NSString *ownerSceUid;
@property (nonatomic) long long roomUserCount;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) NSArray *audienceAvatarURLArray;
@property (nonatomic) long long roomType;
@property (nonatomic) unsigned long long roomStatus;
@property (nonatomic) long long linkDays;
@property (nonatomic) long long linkInterval;
@property (nonatomic) BOOL isJoined;

+ (long long)customMessageType;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
