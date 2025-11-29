@class NSString;

@interface TIMXMessageKVORM : TIMXBaseORM <WCTTableCoding, TIMXMessageKVModelProtocol>

@property (copy, nonatomic) NSString *belongingMessageID;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_table_constraint_9:(void *)a0;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (void)__wcdb_index_15:(void *)a0;
+ (const void *)ss_key;
+ (const void *)ss_value;
+ (id)swift_ss_key;
+ (id)swift_ss_value;
+ (const void *)belongingMessageID;
+ (id)referMessageKeyWithServerMessageID:(long long)a0;
+ (id)referRootMessageQueryChildrenKeyWithRootMessageServerID:(long long)a0;
+ (const void *)ss_belongingMessageID;
+ (id)swift_ss_belongingMessageID;
+ (void)__wcdb_index_17:(void *)a0;
+ (const void *)key;
+ (const void *)value;
+ (const void *)allProperties;

- (void)refreshWithMessageID:(id)a0 key:(id)a1 value:(id)a2;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
