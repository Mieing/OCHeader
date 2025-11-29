@class NSString;

@interface HistoryAddMsgWrap : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) int msgType;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int imgStatus;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) NSString *pushContent;
@property (nonatomic) long long newMsgId;
@property (nonatomic) unsigned int msgSeq;
@property (retain, nonatomic) NSString *chatName;
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
+ (const void *)fromUserName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_fromUserName;
+ (const void *)toUserName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_toUserName;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_msgType;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_content;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_status;
+ (const void *)imgStatus;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_imgStatus;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_createTime;
+ (const void *)msgSource;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_msgSource;
+ (const void *)pushContent;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_pushContent;
+ (const void *)newMsgId;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_newMsgId;
+ (const void *)msgSeq;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_msgSeq;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_chatName;
+ (void)__wcdb_table_constraint_12:(void *)a0;
+ (void)__wcdb_table_constraint_13:(void *)a0;
+ (void)__wcdb_index_14:(void *)a0;
+ (id)generateWithMsgWrap:(id)a0;

- (id)generateMsgWrap;
- (void).cxx_destruct;

@end
