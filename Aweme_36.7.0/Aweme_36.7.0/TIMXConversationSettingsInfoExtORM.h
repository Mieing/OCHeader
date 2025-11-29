@class NSString;

@interface TIMXConversationSettingsInfoExtORM : TIMXBaseORM <WCTTableCoding, TIMXConversationSettingsInfoExtModelProtocol>

@property (retain, nonatomic) NSString *belongingConversationIdentifier;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)belongingConversationIdentifier;
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
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (void)__wcdb_table_constraint_9:(void *)a0;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (const void *)ss_version;
+ (id)swift_ss_version;
+ (void)__wcdb_column_constraint_15:(void *)a0;
+ (const void *)ss_key;
+ (const void *)ss_value;
+ (id)swift_ss_key;
+ (id)swift_ss_value;
+ (const void *)ss_belongingConversationIdentifier;
+ (id)swift_ss_belongingConversationIdentifier;
+ (void)__wcdb_table_constraint_11:(void *)a0;
+ (const void *)key;
+ (const void *)version;
+ (const void *)value;
+ (const void *)allProperties;

- (BOOL)isEqualToAnotherOne:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
