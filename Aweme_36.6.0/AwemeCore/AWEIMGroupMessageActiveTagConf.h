@class NSString;

@interface AWEIMGroupMessageActiveTagConf : AWEBaseApiModel <WCTTableCoding, SSWCTTableCoding, AWEIMGroupParticipantBizInfoDBProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *tagId;
@property (copy, nonatomic) NSString *belongCid;
@property (nonatomic) long long activeDays;
@property (copy, nonatomic) NSString *activeTag;
@property (copy, nonatomic) NSString *tagRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__wcdbtyper;
+ (const void *)tagRule;
+ (const void *)activeTag;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (void)__wcdb_index_23:(void *)a0;
+ (const void *)__wcdb_synthesize_25:(void *)a0;
+ (void)__wcdb_table_constraint_19:(void *)a0;
+ (void)__wcdb_table_constraint_21:(void *)a0;
+ (const void *)__wcdb_synthesize_27:(void *)a0;
+ (const void *)__wcdb_synthesize_29:(void *)a0;
+ (const void *)__wcdb_synthesize_31:(void *)a0;
+ (const void *)belongCid;
+ (const void *)ss_belongCid;
+ (const void *)ss_activeDays;
+ (id)swift_ss_belongCid;
+ (id)swift_ss_activeDays;
+ (const void *)ss_activeTag;
+ (const void *)ss_tagId;
+ (const void *)ss_tagRule;
+ (id)swift_ss_activeTag;
+ (id)swift_ss_tagId;
+ (const void *)__wcdb_synthesize_33:(void *)a0;
+ (id)swift_ss_tagRule;
+ (const void *)tagId;
+ (const void *)allProperties;
+ (id)tableName;
+ (id)JSONKeyPathsByPropertyKey;
+ (const void *)activeDays;

- (void).cxx_destruct;

@end
