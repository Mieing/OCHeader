@class NSString;

@interface WCFinderLiveShopWindowShareModel : MMObject <WCTTableCoding>

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *commodityInStockCount;
@property (copy, nonatomic) NSString *shareItemXML;
@property (nonatomic) unsigned long long date;
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
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_finderUsername;
+ (const void *)commodityInStockCount;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_commodityInStockCount;
+ (const void *)shareItemXML;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_shareItemXML;
+ (const void *)date;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_date;

- (void).cxx_destruct;

@end
