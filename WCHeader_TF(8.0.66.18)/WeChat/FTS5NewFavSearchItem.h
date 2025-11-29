@class NSString;

@interface FTS5NewFavSearchItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int FavItemReservedInt;
@property (retain, nonatomic) NSString *FavItemReservedText;
@property (retain, nonatomic) NSString *searchTitle;
@property (retain, nonatomic) NSString *searchDesc;
@property (retain, nonatomic) NSString *searchSource;
@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned int updateTime;
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
+ (const void *)searchTitle;
+ (const void *)__wcdb_synthesize_63:(void *)a0;
+ (id)swift_searchTitle;
+ (const void *)searchDesc;
+ (const void *)__wcdb_synthesize_64:(void *)a0;
+ (id)swift_searchDesc;
+ (const void *)searchSource;
+ (const void *)__wcdb_synthesize_65:(void *)a0;
+ (id)swift_searchSource;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_66:(void *)a0;
+ (id)swift_localId;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_67:(void *)a0;
+ (id)swift_updateTime;
+ (const void *)FavItemReservedInt;
+ (const void *)__wcdb_synthesize_68:(void *)a0;
+ (id)swift_FavItemReservedInt;
+ (const void *)FavItemReservedText;
+ (const void *)__wcdb_synthesize_69:(void *)a0;
+ (id)swift_FavItemReservedText;
+ (void)__wcdb_virtual_table_70:(void *)a0;
+ (void)__wcdb_virtual_table_71:(void *)a0;
+ (void)__wcdb_column_constraint_72:(void *)a0;
+ (void)__wcdb_column_constraint_73:(void *)a0;
+ (void)__wcdb_column_constraint_74:(void *)a0;
+ (void)__wcdb_column_constraint_75:(void *)a0;
+ (void)__wcdb_column_constraint_76:(void *)a0;
+ (void)__wcdb_column_constraint_77:(void *)a0;
+ (void)__wcdb_column_constraint_78:(void *)a0;

- (void).cxx_destruct;

@end
