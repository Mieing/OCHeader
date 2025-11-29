@class NSString;

@interface TIMXParticipantReadReceiptORM : TIMXBaseORM <WCTTableCoding, TIMXParticipantReadReceiptModelProtocol>

@property (readonly, nonatomic) long long realMinIndex;
@property (readonly, nonatomic) BOOL needFixMinIndex;
@property (nonatomic) long long userID;
@property (retain, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long minIndex;
@property (nonatomic) long long readIndex;
@property (nonatomic) long long readOrder;
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
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (void)__wcdb_index_19:(void *)a0;
+ (const void *)ss_userID;
+ (id)swift_ss_userID;
+ (void)__wcdb_table_constraint_13:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (void)__wcdb_column_constraint_15:(void *)a0;
+ (const void *)readIndex;
+ (const void *)ss_belongingConversationIdentifier;
+ (id)swift_ss_belongingConversationIdentifier;
+ (void)__wcdb_table_constraint_11:(void *)a0;
+ (const void *)ss_minIndex;
+ (id)swift_ss_minIndex;
+ (const void *)readOrder;
+ (const void *)ss_readIndex;
+ (const void *)ss_readOrder;
+ (id)swift_ss_readIndex;
+ (id)swift_ss_readOrder;
+ (const void *)userID;
+ (const void *)minIndex;
+ (const void *)allProperties;

@end
