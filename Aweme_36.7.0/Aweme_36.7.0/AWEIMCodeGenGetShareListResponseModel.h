@class AWEIMCodeGenRequestConfigModel, NSArray, NSDictionary, NSString;

@interface AWEIMCodeGenGetShareListResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *shareListModelArray;
@property (copy, nonatomic) NSDictionary *totalShareSource;
@property (retain, nonatomic) AWEIMCodeGenRequestConfigModel *requestConfigModel;
@property (copy, nonatomic) NSString *message;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
