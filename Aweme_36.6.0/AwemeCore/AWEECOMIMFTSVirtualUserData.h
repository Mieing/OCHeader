@class NSString;

@interface AWEECOMIMFTSVirtualUserData : NSObject <WCTTableCoding, AWEECOMIMFTSUserDataProtocol> {
    BOOL _isAutoIncrement;
}

@property (copy, nonatomic) NSString *offsets;
@property (nonatomic) long long docId;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
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

+ (const void *)secUid;
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
+ (const void *)ss_content;
+ (const void *)ss_contentType;
+ (const void *)ss_ext;
+ (const void *)ss_extType;
+ (const void *)ss_timestamp;
+ (const void *)ss_deleted;
+ (const void *)ss_sortOrder;
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
+ (void)__wcdb_column_constraint_31:(void *)a0;
+ (const void *)ss_uid;
+ (id)swift_ss_uid;
+ (const void *)ss_secUid;
+ (id)swift_ss_secUid;
+ (void)__wcdb_column_constraint_33:(void *)a0;
+ (void)__wcdb_virtual_table_19:(void *)a0;
+ (void)__wcdb_virtual_table_21:(void *)a0;
+ (void)__wcdb_column_constraint_25:(void *)a0;
+ (void)__wcdb_column_constraint_27:(void *)a0;
+ (void)__wcdb_column_constraint_29:(void *)a0;
+ (void)__wcdb_column_constraint_35:(void *)a0;
+ (void)__wcdb_virtual_table_23:(void *)a0;
+ (void)__wcdb_column_constraint_37:(void *)a0;
+ (void)__wcdb_column_constraint_39:(void *)a0;
+ (const void *)uid;
+ (const void *)content;
+ (const void *)timestamp;
+ (const void *)sortOrder;
+ (const void *)allProperties;
+ (const void *)contentType;
+ (const void *)deleted;
+ (const void *)ext;

- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)a0;
- (void).cxx_destruct;

@end
