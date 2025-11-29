@class NSString;

@interface DBMessageOfAppExt : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *chatUsername;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int msgInnerType;
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
+ (const void *)chatUsername;
+ (const void *)__wcdb_synthesize_110:(void *)a0;
+ (id)swift_chatUsername;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_111:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)msgInnerType;
+ (const void *)__wcdb_synthesize_112:(void *)a0;
+ (id)swift_msgInnerType;
+ (void)__wcdb_table_constraint_113:(void *)a0;
+ (void)__wcdb_table_constraint_114:(void *)a0;
+ (void)__wcdb_index_115:(void *)a0;

- (void).cxx_destruct;

@end
