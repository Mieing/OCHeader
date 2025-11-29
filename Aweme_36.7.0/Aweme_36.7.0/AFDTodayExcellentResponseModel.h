@class NSString, AFDTodayExcellentPlateModel;

@interface AFDTodayExcellentResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AFDTodayExcellentPlateModel *todayExcellent;
@property (copy, nonatomic) NSString *lynxUrl;

+ (id)todayExcellentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
