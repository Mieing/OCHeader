@class NSNumber, NSString, NSArray;

@interface AWEMusicSearchResponse : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSArray *results;

+ (id)resultsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
