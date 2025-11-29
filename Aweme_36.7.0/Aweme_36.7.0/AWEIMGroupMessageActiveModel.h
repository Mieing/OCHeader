@class NSString;

@interface AWEIMGroupMessageActiveModel : AWEBaseApiModel <WCTTableCoding, SSWCTTableCoding, AWEIMGroupParticipantBizInfoModel>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *belongCid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *groupOwnerUid;
@property (nonatomic) long long activeDays;
@property (nonatomic) long long inactiveTime;
@property (copy, nonatomic) NSString *tagId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)secUid;
+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (const void *)__wcdb_synthesize_17:(void *)a0;
+ (const void *)ss_secUid;
+ (id)swift_ss_secUid;
+ (void)__wcdb_table_constraint_1:(void *)a0;
+ (void)__wcdb_table_constraint_3:(void *)a0;
+ (void)__wcdb_index_5:(void *)a0;
+ (void)__wcdb_index_7:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;
+ (const void *)belongCid;
+ (const void *)ss_belongCid;
+ (const void *)ss_activeDays;
+ (const void *)ss_inactiveTime;
+ (id)swift_ss_belongCid;
+ (id)swift_ss_activeDays;
+ (id)swift_ss_inactiveTime;
+ (const void *)allProperties;
+ (const void *)inactiveTime;
+ (id)JSONKeyPathsByPropertyKey;
+ (const void *)activeDays;

- (id)bizInfoModel;
- (void).cxx_destruct;

@end
