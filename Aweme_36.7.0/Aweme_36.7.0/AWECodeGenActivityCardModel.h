@class NSString, NSArray, AWECodeGenUrlModel;

@interface AWECodeGenActivityCardModel : AWEBaseDataModel

@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSArray *talentTasksModelArray;
@property (copy, nonatomic) NSString *detailSchema;
@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
