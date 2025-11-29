@class NSString;

@interface TIMXConversationLocalInfoORM : TIMXBaseORM <WCTTableCoding, TIMXConversationLocalInfoModelProtocol>

@property (retain, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long infoVersion;
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
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;
+ (const void *)ss_belongingConversationIdentifier;
+ (id)swift_ss_belongingConversationIdentifier;
+ (const void *)infoVersion;
+ (const void *)ss_infoVersion;
+ (id)swift_ss_infoVersion;
+ (const void *)allProperties;

- (void).cxx_destruct;

@end
