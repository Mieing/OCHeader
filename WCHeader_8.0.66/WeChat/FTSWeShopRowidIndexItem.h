@class NSString;

@interface FTSWeShopRowidIndexItem : NSObject <WCTTableCoding>

@property (nonatomic) long long localId;
@property (nonatomic) long long indexRowid;
@property (nonatomic) long long indexRowidForPinyin;
@property (nonatomic) long long updateTime;
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
+ (const void *)__wcdb_synthesize_176:(void *)a0;
+ (id)swift_localId;
+ (const void *)indexRowid;
+ (const void *)__wcdb_synthesize_177:(void *)a0;
+ (id)swift_indexRowid;
+ (const void *)indexRowidForPinyin;
+ (const void *)__wcdb_synthesize_178:(void *)a0;
+ (id)swift_indexRowidForPinyin;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_179:(void *)a0;
+ (id)swift_updateTime;
+ (void)__wcdb_column_constraint_180:(void *)a0;


@end
