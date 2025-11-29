@class NSNumber, NSArray;

@interface AWEOneDayDailyModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *date;
@property (copy, nonatomic) NSArray *storyList;

+ (id)storyListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
