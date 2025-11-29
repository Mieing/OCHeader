@class NSString;

@interface FavFileRetainCount : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int itemLocalId;
@property (retain, nonatomic) NSString *dataFmt;
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
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_79:(void *)a0;
+ (id)swift_md5;
+ (const void *)itemLocalId;
+ (const void *)__wcdb_synthesize_80:(void *)a0;
+ (id)swift_itemLocalId;
+ (const void *)dataFmt;
+ (const void *)__wcdb_synthesize_81:(void *)a0;
+ (id)swift_dataFmt;
+ (void)__wcdb_index_82:(void *)a0;
+ (void)__wcdb_index_83:(void *)a0;
+ (void)__wcdb_column_constraint_84:(void *)a0;

- (void).cxx_destruct;

@end
