@class NSString;

@interface WCTMaster : NSObject

@property (class, readonly, nonatomic) NSString *tableName;

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *tblName;
@property (nonatomic) int rootpage;
@property (retain, nonatomic) NSString *sql;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_type;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_name;
+ (const void *)tblName;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_tblName;
+ (const void *)rootpage;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_rootpage;
+ (const void *)sql;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_sql;

- (void).cxx_destruct;

@end
