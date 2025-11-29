@class NSString;

@interface BrandFollowedContactDigestInfo : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *bizUsername;
@property (copy, nonatomic) NSString *digest;
@property (nonatomic) long long digestTime;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)bizUsername;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_bizUsername;
+ (const void *)digest;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_digest;
+ (const void *)digestTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_digestTime;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;
+ (id)parsedFromBizLatestItem:(id)a0;

- (void).cxx_destruct;

@end
