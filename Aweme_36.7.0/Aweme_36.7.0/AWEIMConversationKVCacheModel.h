@class NSString;

@interface AWEIMConversationKVCacheModel : NSObject <WCTTableCoding, SSWCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (const void *)ss_conversationId;
+ (id)swift_ss_conversationId;
+ (const void *)ss_key;
+ (const void *)ss_value;
+ (void)__wcdb_table_constraint_1:(void *)a0;
+ (void)__wcdb_table_constraint_3:(void *)a0;
+ (id)swift_ss_key;
+ (id)swift_ss_value;
+ (const void *)key;
+ (const void *)value;
+ (const void *)allProperties;
+ (const void *)conversationId;

- (void).cxx_destruct;

@end
