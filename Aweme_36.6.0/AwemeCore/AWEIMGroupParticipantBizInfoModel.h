@class NSString;

@interface AWEIMGroupParticipantBizInfoModel : NSObject <WCTTableCoding, SSWCTTableCoding, AWEIMGroupParticipantBizInfoDBProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *belongCid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *groupOwnerUid;
@property (nonatomic) unsigned long long bizInfoType;
@property (copy, nonatomic) NSString *contentInJson;
@property (copy, nonatomic) NSString *extInJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)secUid;
+ (id)__wcdbtyper;
+ (const void *)groupOwnerUid;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (const void *)__wcdb_synthesize_17:(void *)a0;
+ (const void *)ss_secUid;
+ (id)swift_ss_secUid;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_1:(void *)a0;
+ (void)__wcdb_table_constraint_3:(void *)a0;
+ (const void *)belongCid;
+ (const void *)contentInJson;
+ (const void *)ss_belongCid;
+ (id)swift_ss_belongCid;
+ (const void *)ss_bizInfoType;
+ (const void *)bizInfoType;
+ (const void *)ss_groupOwnerUid;
+ (const void *)extInJson;
+ (const void *)ss_contentInJson;
+ (const void *)ss_extInJson;
+ (id)swift_ss_groupOwnerUid;
+ (id)swift_ss_bizInfoType;
+ (id)swift_ss_contentInJson;
+ (id)swift_ss_extInJson;
+ (const void *)allProperties;
+ (id)tableName;

- (id)fansClubModel;
- (id)fansTagsModel;
- (id)messageActiveModel;
- (id)liveFansSubscriptionDateModel;
- (void).cxx_destruct;

@end
