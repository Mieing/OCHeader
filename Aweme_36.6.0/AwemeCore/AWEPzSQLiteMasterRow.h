@class NSString;

@interface AWEPzSQLiteMasterRow : NSObject <WCTTableCoding, SSWCTTableCoding>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *tbl_name;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)ss_type;
+ (id)swift_ss_type;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)ss_tbl_name;
+ (const void *)tbl_name;
+ (id)swift_ss_tbl_name;
+ (const void *)type;
+ (const void *)allProperties;

- (void).cxx_destruct;

@end
