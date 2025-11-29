@class NSString;

@interface ChatInfoChangeMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) unsigned long long voipRoomid;
@property (retain, nonatomic) NSString *userWxid;
@property (nonatomic) unsigned long long userUin;
@property (retain, nonatomic) NSString *userNickname;
@property (retain, nonatomic) NSString *robotWxid;
@property (nonatomic) unsigned long long robotNickname;
@property (nonatomic) BOOL isCloseRoom;

+ (void)initialize;

@end
