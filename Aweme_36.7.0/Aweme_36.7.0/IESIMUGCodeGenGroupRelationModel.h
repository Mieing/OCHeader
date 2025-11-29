@class NSString;

@interface IESIMUGCodeGenGroupRelationModel : AWEBaseDataModel <WCTTableCoding, SSWCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *relationId;
@property (copy, nonatomic) NSString *conversationShortId;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *createTime;
@property (copy, nonatomic) NSString *lastUpdateTime;
@property (copy, nonatomic) NSString *establishTime;

+ (const void *)enterFrom;
+ (const void *)conversationShortId;
+ (const void *)establishTime;
+ (const void *)relationId;
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
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (void)__wcdb_index_23:(void *)a0;
+ (void)__wcdb_column_constraint_21:(void *)a0;
+ (const void *)ss_enterFrom;
+ (id)swift_ss_enterFrom;
+ (const void *)ss_createTime;
+ (const void *)ss_establishTime;
+ (const void *)ss_lastUpdateTime;
+ (id)swift_ss_createTime;
+ (id)swift_ss_establishTime;
+ (id)swift_ss_lastUpdateTime;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (void)__wcdb_column_constraint_19:(void *)a0;
+ (const void *)ss_relationId;
+ (const void *)ss_conversationShortId;
+ (const void *)ss_conversationId;
+ (const void *)ss_status;
+ (id)swift_ss_relationId;
+ (id)swift_ss_conversationShortId;
+ (id)swift_ss_conversationId;
+ (id)swift_ss_status;
+ (const void *)createTime;
+ (const void *)allProperties;
+ (const void *)lastUpdateTime;
+ (const void *)status;
+ (const void *)conversationId;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
