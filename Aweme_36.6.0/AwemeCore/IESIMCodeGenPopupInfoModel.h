@class NSArray;

@interface IESIMCodeGenPopupInfoModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *noticeListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
