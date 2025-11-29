@class NSString;

@interface DBRoomHistory : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned long long historyId;
@property (nonatomic) long long msgServerId;
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
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_170:(void *)a0;
+ (id)swift_chatName;
+ (const void *)historyId;
+ (const void *)__wcdb_synthesize_171:(void *)a0;
+ (id)swift_historyId;
+ (const void *)msgServerId;
+ (const void *)__wcdb_synthesize_172:(void *)a0;
+ (id)swift_msgServerId;
+ (void)__wcdb_table_constraint_173:(void *)a0;
+ (void)__wcdb_table_constraint_174:(void *)a0;
+ (void)__wcdb_index_175:(void *)a0;
+ (void)__wcdb_index_176:(void *)a0;

- (void).cxx_destruct;

@end
