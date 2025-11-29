@class NSString;

@interface FavMusic : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *musicId;
@property (nonatomic) unsigned int itemLocalId;
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
+ (const void *)itemLocalId;
+ (const void *)__wcdb_synthesize_90:(void *)a0;
+ (id)swift_itemLocalId;
+ (const void *)musicId;
+ (const void *)__wcdb_synthesize_91:(void *)a0;
+ (id)swift_musicId;
+ (void)__wcdb_column_constraint_92:(void *)a0;
+ (void)__wcdb_index_93:(void *)a0;
+ (void)__wcdb_column_constraint_94:(void *)a0;

- (void).cxx_destruct;

@end
