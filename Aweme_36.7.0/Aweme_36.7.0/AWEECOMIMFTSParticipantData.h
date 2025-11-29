@class NSString;

@interface AWEECOMIMFTSParticipantData : NSObject <WCTTableCoding, AWEECOMIMFTSParticipantDataProtocol> {
    BOOL isAutoIncrement;
    long long lastInsertedRowID;
}

@property (nonatomic) long long docId;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *convId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long contentType;
@property (copy, nonatomic) NSString *ext;
@property (nonatomic) long long extType;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL deleted;
@property (nonatomic) long long sortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)convId;
+ (id)__wcdbtyper;
+ (const void *)extType;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)ss_docId;
+ (const void *)ss_convId;
+ (const void *)ss_content;
+ (const void *)ss_contentType;
+ (const void *)ss_ext;
+ (const void *)ss_extType;
+ (const void *)ss_timestamp;
+ (const void *)ss_deleted;
+ (const void *)ss_sortOrder;
+ (const void *)docId;
+ (id)swift_ss_docId;
+ (id)swift_ss_convId;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_ss_content;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_ss_contentType;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_ss_ext;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_ss_extType;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (id)swift_ss_timestamp;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (id)swift_ss_deleted;
+ (const void *)__wcdb_synthesize_17:(void *)a0;
+ (id)swift_ss_sortOrder;
+ (void)__wcdb_index_21:(void *)a0;
+ (void)__wcdb_index_23:(void *)a0;
+ (void)__wcdb_index_25:(void *)a0;
+ (void)__wcdb_index_27:(void *)a0;
+ (void)__wcdb_index_29:(void *)a0;
+ (void)__wcdb_column_constraint_31:(void *)a0;
+ (const void *)__wcdb_synthesize_19:(void *)a0;
+ (const void *)ss_uid;
+ (id)swift_ss_uid;
+ (const void *)uid;
+ (const void *)content;
+ (const void *)timestamp;
+ (const void *)sortOrder;
+ (const void *)allProperties;
+ (const void *)contentType;
+ (const void *)deleted;
+ (const void *)ext;

- (void)setLastInsertedRowID:(long long)a0;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)a0;
- (void).cxx_destruct;
- (long long)lastInsertedRowID;

@end
