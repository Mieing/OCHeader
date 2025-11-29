@class NSNumber;

@interface AWECommentFeedStrategyModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *commentFeedCanLoadMore;
@property (retain, nonatomic) NSNumber *picCursor;
@property (retain, nonatomic) NSNumber *loadMoreCount;
@property (retain, nonatomic) NSNumber *commentCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
