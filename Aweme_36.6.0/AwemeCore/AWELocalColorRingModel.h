@class NSArray, AWELocalMomentNotesInfo;

@interface AWELocalColorRingModel : AWELocalUserCenterBaseModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (retain, nonatomic) NSArray *ringItems;
@property (retain, nonatomic) AWELocalMomentNotesInfo *notesInfo;

+ (const void *)modifyTime;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)notesInfo;
+ (const void *)ringItems;
+ (id)ringItemsJSONTransformer;
+ (id)notesInfoJSONTransformer;
+ (const void *)userID;
+ (const void *)updateTime;
+ (const void *)isDeleted;
+ (id)JSONKeyPathsByPropertyKey;

- (id)userPropertyDetail;
- (id)getColorRingTableModel;
- (void).cxx_destruct;
- (id)targetTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTableModel:(id)a0;

@end
