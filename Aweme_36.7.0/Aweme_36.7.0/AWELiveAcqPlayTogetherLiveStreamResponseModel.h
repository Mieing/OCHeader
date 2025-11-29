@class NSArray;

@interface AWELiveAcqPlayTogetherLiveStreamResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSArray *events;

+ (id)awemeListJSONTransformer;
+ (id)eventsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
