@class NSString;

@interface SSWCTMaster : NSObject

@property (class, readonly, nonatomic) NSString *tableName;

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *tblName;
@property (nonatomic) int rootpage;
@property (retain, nonatomic) NSString *sql;

+ (id)__wcdbtyper;
+ (const void *)ss_type;
+ (const void *)ss_tblName;
+ (const void *)ss_rootpage;
+ (const void *)ss_sql;
+ (id)swift_ss_type;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_ss_tblName;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_ss_rootpage;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_ss_sql;
+ (const void *)objectRelationalMapping;
+ (const void *)ss_name;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_ss_name;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)allProperties;

- (void).cxx_destruct;

@end
