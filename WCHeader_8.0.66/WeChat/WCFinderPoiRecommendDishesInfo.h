@class NSString, WCFinderJumpInfo, WCFinderPoiRecommendDishesArray;

@interface WCFinderPoiRecommendDishesInfo : NSObject <PBCoding, WCTTableCoding>

@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) int commentScene;
@property (nonatomic) unsigned long long cacheTime;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) WCFinderPoiRecommendDishesArray *dishesArray;
@property (retain, nonatomic) WCFinderJumpInfo *footerJumpInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (void)PBArrayAdd_poiId;
+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_dishesArray;
+ (void)PBArrayAdd_footerJumpInfo;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)poiId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_poiId;
+ (const void *)commentScene;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_commentScene;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_title;
+ (const void *)dishesArray;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_dishesArray;
+ (const void *)footerJumpInfo;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_footerJumpInfo;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
