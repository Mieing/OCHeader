@class NSString;

@interface MMReportSessionInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int unreadCount;
@property (nonatomic) BOOL bMuteChat;
@property (nonatomic) BOOL bTopChat;
@property (nonatomic) unsigned int chatIndex;
@property (nonatomic) BOOL bNewChat;
@property (nonatomic) unsigned int enterTime;
@property (nonatomic) unsigned int leaveTime;
@property (nonatomic) BOOL bHasReply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_unreadCount;
+ (void)PBArrayAdd_bMuteChat;
+ (void)PBArrayAdd_bTopChat;
+ (void)PBArrayAdd_chatIndex;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithSessionInfo:(id)a0 withChatIndex:(unsigned int)a1;
- (void).cxx_destruct;

@end
