@class NSString, AWEURLModel;

@interface AWEPOIRecommendActivityModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *activityDescription;
@property (retain, nonatomic) AWEURLModel *activityURL;
@property (copy, nonatomic) NSString *activitySchema;
@property (copy, nonatomic) NSString *activitySource;
@property (nonatomic) unsigned long long activityType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
