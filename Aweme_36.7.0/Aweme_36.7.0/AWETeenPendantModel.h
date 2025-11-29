@class NSString, AWETeenPendantImagesModel;

@interface AWETeenPendantModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *activityID;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) unsigned long long format;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWETeenPendantImagesModel *resourceURLs;

+ (id)resourceURLsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
