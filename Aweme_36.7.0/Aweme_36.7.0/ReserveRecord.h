@class HTSLiveUser, NSString, ReserveRecord_Button, NSMutableArray, HTSLiveRoom;

@interface ReserveRecord : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *reserveId;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (copy, nonatomic) NSString *descText;
@property (retain, nonatomic) ReserveRecord_Button *inviteButton;
@property (nonatomic) BOOL hasInviteButton;
@property (retain, nonatomic) ReserveRecord_Button *replyButton;
@property (nonatomic) BOOL hasReplyButton;
@property (copy, nonatomic) NSString *battleAttachedInfo;

+ (id)descriptor;

@end
