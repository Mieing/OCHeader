@class NSString;

@interface WCFinderCategoryInfo : NSObject <WCTTableCoding, PBCoding>

@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_categoryName;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)categoryName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_categoryName;
+ (id)finderCategoryInfo:(id)a0;

- (id)getPBPropertyTable;
- (id)genCategoryInfo;
- (void).cxx_destruct;

@end
