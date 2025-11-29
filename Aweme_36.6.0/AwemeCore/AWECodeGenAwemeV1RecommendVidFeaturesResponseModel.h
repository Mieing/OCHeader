@class NSString;

@interface AWECodeGenAwemeV1RecommendVidFeaturesResponseModel : AWEBaseDataModel

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *features;
@property (nonatomic) long long itemId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
