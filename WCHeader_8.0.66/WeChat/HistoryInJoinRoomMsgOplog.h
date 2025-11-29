@class NSString;

@interface HistoryInJoinRoomMsgOplog : WXPBGeneratedMessage

@property (nonatomic) unsigned long long newMsgId;
@property (nonatomic) unsigned long long historyId;
@property (retain, nonatomic) NSString *roomName;
@property (nonatomic) unsigned int oper;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *clientMsgId;

+ (void)initialize;

@end
