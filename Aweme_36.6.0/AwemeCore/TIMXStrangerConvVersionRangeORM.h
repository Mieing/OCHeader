@class NSString;

@interface TIMXStrangerConvVersionRangeORM : TIMXBaseORM <WCTTableCoding, TIMXStrangerConvVersionRangeModelProtocol> {
    BOOL isAutoIncrement;
    long long lastInsertedRowID;
}

@property (nonatomic) long long identifier;
@property (nonatomic) long long minVersion;
@property (nonatomic) long long maxVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
+ (const void *)ss_identifier;
+ (id)swift_ss_identifier;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (const void *)ss_minVersion;
+ (const void *)ss_maxVersion;
+ (id)swift_ss_minVersion;
+ (id)swift_ss_maxVersion;
+ (const void *)allProperties;
+ (const void *)maxVersion;
+ (const void *)identifier;
+ (const void *)minVersion;

@end
