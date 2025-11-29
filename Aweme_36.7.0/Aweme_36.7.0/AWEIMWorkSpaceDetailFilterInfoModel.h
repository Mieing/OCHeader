@class NSArray;

@interface AWEIMWorkSpaceDetailFilterInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *missionSource;
@property (copy, nonatomic) NSArray *missionStatus;

+ (id)missionSourceJSONTransformer;
+ (id)missionStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
