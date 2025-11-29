@class NSString, NSArray;

@interface AWEGeneralFilmTelevisionTopicModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *topicArray;

+ (id)topicArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
