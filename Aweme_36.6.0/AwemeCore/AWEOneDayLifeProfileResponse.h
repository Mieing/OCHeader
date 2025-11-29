@class NSArray, NSNumber;

@interface AWEOneDayLifeProfileResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *dailyStoryList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)dailyStoryListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
