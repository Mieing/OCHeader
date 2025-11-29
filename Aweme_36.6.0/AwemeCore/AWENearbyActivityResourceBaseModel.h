@class AWEURLModel;

@interface AWENearbyActivityResourceBaseModel : AWEBaseApiModel

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) AWEURLModel *urls;

+ (id)urlsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
