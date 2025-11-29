@class NSString;

@interface FTSWeShopPinyinSearchItem : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *shopName;
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
+ (const void *)shopName;
+ (const void *)__wcdb_synthesize_184:(void *)a0;
+ (id)swift_shopName;
+ (void)__wcdb_virtual_table_185:(void *)a0;
+ (void)__wcdb_virtual_table_186:(void *)a0;

- (void).cxx_destruct;

@end
