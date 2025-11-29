@class NSString, NSArray;

@interface AWECodeGenCEMInteractiveTitleModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *labelListModelArray;
@property (nonatomic) long long showTime;
@property (copy, nonatomic) NSString *scheme;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
