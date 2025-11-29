@class NSString;

@interface FavTagDBItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int tagId;
@property (retain, nonatomic) NSString *name;
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
+ (const void *)tagId;
+ (const void *)__wcdb_synthesize_85:(void *)a0;
+ (id)swift_tagId;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_86:(void *)a0;
+ (id)swift_name;
+ (void)__wcdb_column_constraint_87:(void *)a0;
+ (void)__wcdb_column_constraint_88:(void *)a0;
+ (void)__wcdb_table_constraint_89:(void *)a0;

- (void).cxx_destruct;

@end
