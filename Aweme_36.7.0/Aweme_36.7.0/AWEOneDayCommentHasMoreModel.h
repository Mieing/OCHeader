@class NSArray, NSNumber;

@interface AWEOneDayCommentHasMoreModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *commentList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *totalCount;

+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
