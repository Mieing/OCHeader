@class NSArray;

@interface AWEIMNotificationOwnPostedCommentResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *commentList;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long minTime;

+ (id)commentListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
