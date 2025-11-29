@class NSString;

@interface TIMXMessageIndexRangeORM : TIMXBaseORM <WCTTableCoding, TIMXMessageIndexRangeModelProtocol> {
    BOOL isAutoIncrement;
    long long lastInsertedRowID;
}

@property (nonatomic) long long identifier;
@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long minIndex;
@property (nonatomic) long long maxIndex;
@property (nonatomic) long long minIndexV1;
@property (nonatomic) long long maxIndexV1;
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
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (const void *)ss_identifier;
+ (id)swift_ss_identifier;
+ (void)__wcdb_column_constraint_15:(void *)a0;
+ (const void *)ss_belongingConversationIdentifier;
+ (id)swift_ss_belongingConversationIdentifier;
+ (const void *)ss_minIndex;
+ (id)swift_ss_minIndex;
+ (const void *)minIndexV1;
+ (const void *)maxIndexV1;
+ (const void *)ss_maxIndex;
+ (const void *)ss_minIndexV1;
+ (const void *)ss_maxIndexV1;
+ (id)swift_ss_maxIndex;
+ (id)swift_ss_minIndexV1;
+ (id)swift_ss_maxIndexV1;
+ (void)__wcdb_index_17:(void *)a0;
+ (const void *)minIndex;
+ (const void *)allProperties;
+ (const void *)identifier;
+ (const void *)maxIndex;

- (void)setLastInsertedRowID:(long long)a0;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)a0;
- (void).cxx_destruct;
- (long long)lastInsertedRowID;

@end
