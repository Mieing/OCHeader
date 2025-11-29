@class NSString, NSArray;

@interface IESIMCodeGenTagApplicationSegmentModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSArray *applicationsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
