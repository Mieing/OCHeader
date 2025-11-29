@class NSString, NSArray, AWECodeGenUserModel;

@interface AWECodeGenVideoVisitorModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUserModel *userModel;
@property (nonatomic) int sourceType;
@property (copy, nonatomic) NSString *sourceLabel;
@property (copy, nonatomic) NSArray *diverseDiggListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
