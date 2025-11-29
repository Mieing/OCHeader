@class NSString, NSMutableArray, HTSLiveRoomBattleProcessInfo;

@interface HTSLiveCrossRoomLinkReplyContent : IESLivePBBaseMessage

@property (nonatomic) int replyType;
@property (nonatomic) long long inviteeRoomId;
@property (nonatomic) int crossType;
@property (retain, nonatomic) NSMutableArray *guestInfosArray;
@property (readonly, nonatomic) unsigned long long guestInfosArray_Count;
@property (copy, nonatomic) NSString *inviteeAnchorId;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long inviteSource;
@property (copy, nonatomic) NSString *replyUserId;
@property (copy, nonatomic) NSString *replyToast;
@property (nonatomic) int replyOperate;
@property (retain, nonatomic) HTSLiveRoomBattleProcessInfo *processInfo;
@property (nonatomic) BOOL hasProcessInfo;
@property (nonatomic) int crossRoomKind;
@property (nonatomic) long long inviteeLiveRoomMode;
@property (nonatomic) int scoreType;

+ (id)descriptor;

@end
