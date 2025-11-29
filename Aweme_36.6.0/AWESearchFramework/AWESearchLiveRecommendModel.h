@class NSString, AWEAwemeRecommondModel;

@interface AWESearchLiveRecommendModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *rid;
@property (retain, nonatomic) AWEAwemeRecommondModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
