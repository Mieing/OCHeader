@class NSString, NSDictionary;

@interface TIMXBotORM : TIMXBaseORM <WCTTableCoding, IESIMConversationBot, TIMXBotModelProtocol, TIMXOConversationBot>

@property (nonatomic) long long userID;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSString *belongingConversationIdentifier;
@property (copy, nonatomic) NSDictionary *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSDictionary *ext;
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
+ (const void *)ss_ext;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_ss_ext;
+ (void)__wcdb_index_19:(void *)a0;
+ (void)__wcdb_index_21:(void *)a0;
+ (const void *)ss_userID;
+ (id)swift_ss_userID;
+ (void)__wcdb_table_constraint_13:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (const void *)ss_secUserID;
+ (void)__wcdb_column_constraint_15:(void *)a0;
+ (id)swift_ss_secUserID;
+ (const void *)ss_belongingConversationIdentifier;
+ (const void *)ss_enable;
+ (id)swift_ss_belongingConversationIdentifier;
+ (id)swift_ss_enable;
+ (void)__wcdb_table_constraint_11:(void *)a0;
+ (const void *)secUserID;
+ (const void *)enable;
+ (const void *)userID;
+ (const void *)allProperties;
+ (const void *)ext;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRootObject:(id)a0;

@end
