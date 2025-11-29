@class NSArray, AWEOneDayUserStoryLiveModel, NSNumber, AWEUserModel;

@interface AWEOneDayUserStoryModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *storyList;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *totalCount;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long readStatus;
@property (nonatomic) long long friendType;
@property (copy, nonatomic) NSArray *simpleStoryList;
@property (retain, nonatomic) AWEOneDayUserStoryLiveModel *room;

+ (id)userJSONTransformer;
+ (id)storyListJSONTransformer;
+ (id)simpleStoryListJSONTransformer;
+ (id)thumbLabelJSONTransformer;
+ (id)largeLabelJSONTransformer;
+ (id)readStatusJSONTransformer;
+ (id)friendTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
