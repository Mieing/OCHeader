@class NSString;

@interface FTS5FavRowidIndex : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned int updateSeq;
@property (nonatomic) int type;
@property (nonatomic) int subTypes;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) long long indexRowid;
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
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_54:(void *)a0;
+ (id)swift_localId;
+ (const void *)updateSeq;
+ (const void *)__wcdb_synthesize_55:(void *)a0;
+ (id)swift_updateSeq;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_56:(void *)a0;
+ (id)swift_type;
+ (const void *)subTypes;
+ (const void *)__wcdb_synthesize_57:(void *)a0;
+ (id)swift_subTypes;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_58:(void *)a0;
+ (id)swift_updateTime;
+ (const void *)indexRowid;
+ (const void *)__wcdb_synthesize_59:(void *)a0;
+ (id)swift_indexRowid;
+ (void)__wcdb_column_constraint_60:(void *)a0;
+ (void)__wcdb_index_61:(void *)a0;
+ (void)__wcdb_index_62:(void *)a0;


@end
