@class NSString, AWEURLModel;

@interface AWENearbyBannerModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEURLModel *pictureURL;

+ (id)pictureURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
