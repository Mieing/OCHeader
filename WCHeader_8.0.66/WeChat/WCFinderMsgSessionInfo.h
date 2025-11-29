@class NSString, WCFinderMsgContactExtInfo;

@interface WCFinderMsgSessionInfo : MMBaseSessionInfo <WCTTableCoding>

@property (retain, nonatomic) NSString *realChatUserName;
@property (nonatomic) BOOL canSendAttachment;
@property (nonatomic) unsigned int comparePriority;
@property (nonatomic) BOOL isGreetMsgSession;
@property (nonatomic) BOOL isSessionHolder;
@property (retain, nonatomic) NSString *realChatSessionId;
@property (retain, nonatomic) WCFinderMsgContactExtInfo *contactExtInfo;
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
+ (const void *)realChatUserName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_realChatUserName;
+ (const void *)unreadCount;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_unreadCount;
+ (const void *)lastMsgUpdateTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_lastMsgUpdateTime;
+ (const void *)draftMsg;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_draftMsg;
+ (const void *)draftMsgTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_draftMsgTime;
+ (const void *)sessionFlag;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_sessionFlag;
+ (const void *)outUnreadCount;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_outUnreadCount;
+ (const void *)sessionTopTime;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_sessionTopTime;
+ (const void *)pbLastMessage;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_pbLastMessage;
+ (const void *)sessionUnTopTime;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_sessionUnTopTime;
+ (const void *)outUnreadMsgTime;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_outUnreadMsgTime;
+ (const void *)jumpMsgLocalId;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_jumpMsgLocalId;
+ (const void *)canSendAttachment;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (id)swift_canSendAttachment;
+ (void)__wcdb_column_constraint_14:(void *)a0;

- (id)initWithSessionId:(id)a0 realChatUserName:(id)a1 lastMsg:(id)a2 needUpdateUnreadCount:(BOOL)a3;
- (long long)compare:(id)a0;
- (void)setLastMessage:(id)a0;
- (void)setPbLastMessage:(id)a0;
- (void)updateWithNewMsg:(id)a0 needUpdateUnreadCount:(BOOL)a1;
- (void).cxx_destruct;

@end
