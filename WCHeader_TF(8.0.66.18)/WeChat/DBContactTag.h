@class NSString;

@interface DBContactTag : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int uiID;
@property (retain, nonatomic) NSString *nsName;
@property (nonatomic) unsigned int tagIndex;
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
+ (const void *)__wcdb_synthesize_58:(void *)a0;
+ (id)swift_uiID;
+ (const void *)nsName;
+ (const void *)__wcdb_synthesize_59:(void *)a0;
+ (id)swift_nsName;
+ (const void *)tagIndex;
+ (const void *)__wcdb_synthesize_60:(void *)a0;
+ (id)swift_tagIndex;
+ (void)__wcdb_column_constraint_61:(void *)a0;
+ (void)__wcdb_column_constraint_62:(void *)a0;
+ (void)__wcdb_index_63:(void *)a0;

- (void).cxx_destruct;

@end
