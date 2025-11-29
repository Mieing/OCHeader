@class NSString;

@interface EcsWeShopExtItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int bizId;
@property (retain, nonatomic) NSString *shopHistoryNextKey;
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
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_bizId;
+ (const void *)shopHistoryNextKey;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_shopHistoryNextKey;
+ (void)__wcdb_column_constraint_2:(void *)a0;

- (void).cxx_destruct;

@end
