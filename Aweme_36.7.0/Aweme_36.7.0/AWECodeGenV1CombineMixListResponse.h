@class AWECodeGenExtraModel, NSArray, NSString;

@interface AWECodeGenV1CombineMixListResponse : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenExtraModel *extraModel;
@property (nonatomic) int privateAwemeCombineCount;
@property (nonatomic) BOOL privateEntrance;
@property (copy, nonatomic) NSArray *coverListModelArray;
@property (copy, nonatomic) NSArray *awemeListModelArray;
@property (nonatomic) int entranceStyle;
@property (copy, nonatomic) NSString *entranceText;
@property (copy, nonatomic) NSString *businessExtra;
@property (nonatomic) BOOL recycleEntrance;
@property (nonatomic) int recycleAwemeCount;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
