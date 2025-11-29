@class NSString, NSArray;

@interface AWEGeneralFilmTelevisionTopicModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *cID;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *topicArray;
@property (nonatomic) BOOL showDivideLine;

+ (id)topicArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
