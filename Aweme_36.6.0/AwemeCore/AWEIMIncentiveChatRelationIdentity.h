@class NSString;

@interface AWEIMIncentiveChatRelationIdentity : NSObject <WCTTableCoding, AWEIMIncentiveChatRelationIdentityProtocol>

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) unsigned long long interactionType;
@property (nonatomic) unsigned long long inviteType;
@property (nonatomic) long long lastUpdateTime;
@property (copy, nonatomic) NSString *relationID;
@property (nonatomic) long long relationLastUpdateTime;
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
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (void)__wcdb_index_21:(void *)a0;
+ (const void *)inviteType;
+ (const void *)relationID;
+ (const void *)ss_relationID;
+ (const void *)ss_lastUpdateTime;
+ (id)swift_ss_relationID;
+ (id)swift_ss_lastUpdateTime;
+ (const void *)relationLastUpdateTime;
+ (const void *)ss_relationLastUpdateTime;
+ (const void *)ss_userID;
+ (const void *)ss_interactionType;
+ (const void *)ss_inviteType;
+ (id)swift_ss_userID;
+ (id)swift_ss_interactionType;
+ (id)swift_ss_inviteType;
+ (id)swift_ss_relationLastUpdateTime;
+ (void)__wcdb_table_constraint_13:(void *)a0;
+ (void)__wcdb_table_constraint_15:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (void)__wcdb_column_constraint_19:(void *)a0;
+ (const void *)userID;
+ (const void *)allProperties;
+ (const void *)interactionType;
+ (const void *)lastUpdateTime;
+ (id)tableName;

- (id)initWithDictionary:(id)a0 relationID:(id)a1 relationLastUpdateTime:(long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
