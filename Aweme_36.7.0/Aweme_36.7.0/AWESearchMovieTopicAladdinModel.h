@class NSString, NSArray;

@interface AWESearchMovieTopicAladdinModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *topicArray;

+ (id)topicArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
