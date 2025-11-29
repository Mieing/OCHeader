@class NSString;

@interface DBContactTagRelation : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int uiID;
@property (retain, nonatomic) NSString *userName;
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
+ (const void *)uiID;
+ (const void *)__wcdb_synthesize_64:(void *)a0;
+ (id)swift_uiID;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_65:(void *)a0;
+ (id)swift_userName;
+ (void)__wcdb_index_66:(void *)a0;
+ (void)__wcdb_index_67:(void *)a0;
+ (void)__wcdb_table_constraint_68:(void *)a0;
+ (void)__wcdb_table_constraint_69:(void *)a0;

- (void).cxx_destruct;

@end
