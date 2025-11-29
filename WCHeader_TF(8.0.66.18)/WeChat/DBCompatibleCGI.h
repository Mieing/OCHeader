@class NSString, NSData;

@interface DBCompatibleCGI : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *pbUniqueID;
@property (retain, nonatomic) NSData *pbRequestData;
@property (retain, nonatomic) NSData *pbResponseData;
@property (nonatomic) unsigned int uiCgi;
@property (nonatomic) unsigned int cgiType;
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
+ (const void *)pbUniqueID;
+ (const void *)__wcdb_synthesize_177:(void *)a0;
+ (id)swift_pbUniqueID;
+ (const void *)pbRequestData;
+ (const void *)__wcdb_synthesize_178:(void *)a0;
+ (id)swift_pbRequestData;
+ (const void *)pbResponseData;
+ (const void *)__wcdb_synthesize_179:(void *)a0;
+ (id)swift_pbResponseData;
+ (const void *)uiCgi;
+ (const void *)__wcdb_synthesize_180:(void *)a0;
+ (id)swift_uiCgi;
+ (const void *)cgiType;
+ (const void *)__wcdb_synthesize_181:(void *)a0;
+ (id)swift_cgiType;
+ (void)__wcdb_column_constraint_182:(void *)a0;
+ (void)__wcdb_column_constraint_183:(void *)a0;

- (void).cxx_destruct;

@end
