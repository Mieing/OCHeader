@class NSString;

@interface AWEIMIncentiveChatCommandMessageModel : NSObject <WCTTableCoding, SSWCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSString *bizType;
@property (retain, nonatomic) NSString *data;

+ (const void *)bizType;
+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (const void *)ss_conversationID;
+ (id)swift_ss_conversationID;
+ (const void *)ss_bizType;
+ (const void *)ss_data;
+ (id)swift_ss_bizType;
+ (id)swift_ss_data;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_table_constraint_9:(void *)a0;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (void)__wcdb_index_15:(void *)a0;
+ (const void *)conversationID;
+ (const void *)allProperties;
+ (const void *)data;

- (void).cxx_destruct;

@end
