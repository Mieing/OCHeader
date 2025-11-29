@class NSString, WCTableSessionStorage;

@interface W1wPersonalMsgSessionStorage : NSObject

@property (retain, nonatomic) WCTableSessionStorage *sessionStorage;
@property (copy, nonatomic) NSString *username;

+ (id)sessionDB;
+ (id)customTableNameForUsername:(id)a0;

- (id)initWithUsername:(id)a0 targetDB:(id)a1;
- (void)addOrUpdateSessionForSessionID:(id)a0 message:(id)a1;
- (void)addOrUpdateSession:(id)a0;
- (void)updateSessionID:(id)a0 lastMessage:(id)a1;
- (unsigned long long)sessionCount;
- (id)sessionInfoAtIndex:(long long)a0;
- (id)sessionInfoForSessionID:(id)a0;
- (id)sessionInfoForToUserName:(id)a0;
- (BOOL)clearUnreadCountForSessionID:(id)a0;
- (void)clearAllUnreadCount;
- (void)deleteSessionID:(id)a0;
- (unsigned long long)allUnreadCount;
- (void).cxx_destruct;

@end
