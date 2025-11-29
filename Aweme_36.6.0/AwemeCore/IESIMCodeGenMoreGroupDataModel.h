@class NSString, NSArray;

@interface IESIMCodeGenMoreGroupDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *groupListModelArray;
@property (nonatomic) long long source;
@property (nonatomic) int joinSource;
@property (copy, nonatomic) NSString *jumpTitle;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *jumpIcon;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
