@class NSString, NSDate;

@interface TIMXThirdPartyMessageORMV2 : TIMXBaseORM <WCTTableCoding, TIMXThirdPartyMessageModelProtocol>

@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long serverMessageID;
@property (nonatomic) int bizId;
@property (nonatomic) long long indexInConversation;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *ext;
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
+ (const void *)indexInConversation;
+ (const void *)ss_content;
+ (const void *)ss_ext;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_ss_content;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_ss_ext;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (void)__wcdb_table_constraint_15:(void *)a0;
+ (void)__wcdb_table_constraint_19:(void *)a0;
+ (const void *)ss_belongingConversationIdentifier;
+ (id)swift_ss_belongingConversationIdentifier;
+ (const void *)ss_createdAt;
+ (id)swift_ss_createdAt;
+ (const void *)ss_serverMessageID;
+ (id)swift_ss_serverMessageID;
+ (const void *)ss_bizId;
+ (const void *)ss_indexInConversation;
+ (id)swift_ss_bizId;
+ (id)swift_ss_indexInConversation;
+ (void)__wcdb_table_constraint_17:(void *)a0;
+ (const void *)serverMessageID;
+ (const void *)content;
+ (const void *)allProperties;
+ (const void *)createdAt;
+ (const void *)bizId;
+ (const void *)ext;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
