@class NSArray, AFDSchoolStoryBasicInfoModel;

@interface AFDSchoolStoryDetailResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AFDSchoolStoryBasicInfoModel *schoolBasicInfo;
@property (retain, nonatomic) NSArray *activityArray;

+ (id)schoolBasicInfoJSONTransformer;
+ (id)activityArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
