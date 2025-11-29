@class NSArray;

@interface AWEListenFeedclassificationModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *contentList;

+ (id)contentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
