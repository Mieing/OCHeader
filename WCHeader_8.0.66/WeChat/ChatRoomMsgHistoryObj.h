@class NSString;

@interface ChatRoomMsgHistoryObj : MMObject <WCTTableCoding>

@property (nonatomic) unsigned long long historyId;
@property (nonatomic) long long serverID;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *chatRoomName;
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
+ (const void *)historyId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_historyId;
+ (const void *)serverID;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_serverID;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_createTime;
+ (const void *)chatRoomName;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_chatRoomName;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_msgType;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_index_7:(void *)a0;
+ (id)generateHistoryObjWithHistoryMsgsInfo:(id)a0 messageWrap:(id)a1;

- (void).cxx_destruct;

@end
