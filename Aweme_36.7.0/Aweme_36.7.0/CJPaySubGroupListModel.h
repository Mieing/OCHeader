@class NSArray, NSString;

@interface CJPaySubGroupListModel : JSONModel

@property (copy, nonatomic) NSArray *assetIndexList;
@property (copy, nonatomic) NSArray *assetInfoList;
@property (nonatomic) long long displayCount;
@property (copy, nonatomic) NSString *foldDesc;
@property (copy, nonatomic) NSString *subGroupType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
