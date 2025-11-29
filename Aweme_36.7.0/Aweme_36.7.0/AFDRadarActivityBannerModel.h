@class NSString, AWEURLModel;

@interface AFDRadarActivityBannerModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *imageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *backgroundColorStart;
@property (copy, nonatomic) NSString *backgroundColorEnd;

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
