@class NSArray, NSNumber;

@interface AFDStoryWorkListModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *data;
@property (retain, nonatomic) NSNumber *maxTimestamp;
@property (retain, nonatomic) NSNumber *minTimestamp;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long level;
@property (retain, nonatomic) NSNumber *lastAuthorID;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
