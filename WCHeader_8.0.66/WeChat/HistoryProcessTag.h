@class NSString;

@interface HistoryProcessTag : MMObject <WCTTableCoding>

@property (nonatomic) unsigned long long historyId;
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
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_historyId;
+ (const void *)chatRoomName;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_chatRoomName;
+ (void)__wcdb_column_constraint_10:(void *)a0;
+ (void)__wcdb_index_11:(void *)a0;

- (id)initWithHistoryID:(unsigned long long)a0 chatName:(id)a1;
- (void).cxx_destruct;

@end
