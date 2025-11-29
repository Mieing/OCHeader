@class NSString;

@interface WASessionInfo : MMBaseSessionInfo <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_sessionId;
+ (const void *)unreadCount;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_unreadCount;
+ (const void *)lastMsgUpdateTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_lastMsgUpdateTime;
+ (const void *)draftMsg;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_draftMsg;
+ (const void *)draftMsgTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_draftMsgTime;
+ (const void *)sessionFlag;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_sessionFlag;
+ (const void *)outUnreadCount;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_outUnreadCount;
+ (const void *)sessionTopTime;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_sessionTopTime;
+ (const void *)pbLastMessage;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_pbLastMessage;
+ (const void *)sessionUnTopTime;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_sessionUnTopTime;
+ (const void *)outUnreadMsgTime;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_outUnreadMsgTime;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (id)baseSessionInfoWithUsrName:(id)a0 contact:(id)a1 lastMessage:(id)a2;

- (void)setContact:(id)a0;
- (id)genContact;
- (void)updateSessionInfo;
- (void)updateOutUnreadCount;
- (void)clearOutUnreadCount;

@end
