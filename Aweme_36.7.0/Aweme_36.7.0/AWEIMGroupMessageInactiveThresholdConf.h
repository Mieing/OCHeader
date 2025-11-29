@class NSString;

@interface AWEIMGroupMessageInactiveThresholdConf : AWEBaseApiModel <WCTTableCoding, SSWCTTableCoding, AWEIMGroupParticipantBizInfoDBProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *belongCid;
@property (nonatomic) long long seconds;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (void)__wcdb_index_39:(void *)a0;
+ (const void *)ss_title;
+ (id)swift_ss_title;
+ (const void *)belongCid;
+ (const void *)ss_belongCid;
+ (id)swift_ss_belongCid;
+ (const void *)ss_seconds;
+ (void)__wcdb_table_constraint_35:(void *)a0;
+ (void)__wcdb_table_constraint_37:(void *)a0;
+ (const void *)__wcdb_synthesize_41:(void *)a0;
+ (const void *)__wcdb_synthesize_43:(void *)a0;
+ (id)swift_ss_seconds;
+ (const void *)__wcdb_synthesize_45:(void *)a0;
+ (const void *)seconds;
+ (const void *)allProperties;
+ (const void *)title;
+ (id)tableName;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
