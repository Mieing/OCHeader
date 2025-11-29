@class NSArray, NSNumber;

@interface AWEHotSearchCommentAISummaryResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *viewPointList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)viewPointListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
