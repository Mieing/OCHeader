@class NSString;

@interface DBContactMeta : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int intCon2;
@property (nonatomic) unsigned int intCon3;
@property (retain, nonatomic) NSString *strCon1;
@property (retain, nonatomic) NSString *strCon2;
@property (retain, nonatomic) NSString *strCon3;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int lastUpdate;
@property (nonatomic) unsigned int flag;
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
+ (const void *)username;
+ (const void *)__wcdb_synthesize_40:(void *)a0;
+ (id)swift_username;
+ (const void *)lastUpdate;
+ (const void *)__wcdb_synthesize_41:(void *)a0;
+ (id)swift_lastUpdate;
+ (const void *)flag;
+ (const void *)__wcdb_synthesize_42:(void *)a0;
+ (id)swift_flag;
+ (const void *)intCon2;
+ (const void *)__wcdb_synthesize_43:(void *)a0;
+ (id)swift_intCon2;
+ (const void *)intCon3;
+ (const void *)__wcdb_synthesize_44:(void *)a0;
+ (id)swift_intCon3;
+ (const void *)strCon1;
+ (const void *)__wcdb_synthesize_45:(void *)a0;
+ (id)swift_strCon1;
+ (const void *)strCon2;
+ (const void *)__wcdb_synthesize_46:(void *)a0;
+ (id)swift_strCon2;
+ (const void *)strCon3;
+ (const void *)__wcdb_synthesize_47:(void *)a0;
+ (id)swift_strCon3;
+ (void)__wcdb_column_constraint_48:(void *)a0;

- (void).cxx_destruct;

@end
