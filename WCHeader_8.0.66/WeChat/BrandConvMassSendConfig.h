@class NSString;

@interface BrandConvMassSendConfig : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int rId;
@property (nonatomic) unsigned int dbCreateTime;
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
+ (const void *)rId;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_rId;
+ (const void *)dbCreateTime;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_dbCreateTime;
+ (void)__wcdb_column_constraint_13:(void *)a0;


@end
