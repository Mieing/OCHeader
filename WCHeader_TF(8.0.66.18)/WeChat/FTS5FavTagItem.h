@class NSString;

@interface FTS5FavTagItem : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *localIds;
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
+ (const void *)tag;
+ (const void *)__wcdb_synthesize_79:(void *)a0;
+ (id)swift_tag;
+ (const void *)localIds;
+ (const void *)__wcdb_synthesize_80:(void *)a0;
+ (id)swift_localIds;
+ (void)__wcdb_virtual_table_81:(void *)a0;
+ (void)__wcdb_virtual_table_82:(void *)a0;

- (void).cxx_destruct;

@end
