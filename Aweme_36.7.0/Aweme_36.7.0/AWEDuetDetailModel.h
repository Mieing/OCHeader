@class AWEAwemeModel;

@interface AWEDuetDetailModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long userCount;

+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
