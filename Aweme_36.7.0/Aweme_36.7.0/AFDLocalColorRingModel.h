@class NSString, NSArray, AWELocalMomentNotesInfo;

@interface AFDLocalColorRingModel : AFDLocalDataCenterBaseModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSArray *ringItems;
@property (retain, nonatomic) AWELocalMomentNotesInfo *notesInfo;

+ (const void *)modifyTime;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)notesInfo;
+ (const void *)ringItems;
+ (const void *)syncTime;
+ (id)ringItemsJSONTransformer;
+ (id)notesInfoJSONTransformer;
+ (const void *)userID;
+ (const void *)isDeleted;
+ (const void *)primaryID;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
