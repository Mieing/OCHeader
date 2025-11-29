@class NSArray, NSNumber;

@interface AWEDetailAwemeResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSArray *trendsAwemeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *musicBackUpCursor;
@property (copy, nonatomic) NSArray *musicAwemeList;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)musicAwemeListJSONTransformer;
+ (id)trendsAwemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
