@class NSString;

@interface FTSWeShopExtItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int bizId;
@property (nonatomic) long long lastSyncUpdateSeq;
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
+ (const void *)bizId;
+ (const void *)__wcdb_synthesize_173:(void *)a0;
+ (id)swift_bizId;
+ (const void *)lastSyncUpdateSeq;
+ (const void *)__wcdb_synthesize_174:(void *)a0;
+ (id)swift_lastSyncUpdateSeq;
+ (void)__wcdb_column_constraint_175:(void *)a0;


@end
