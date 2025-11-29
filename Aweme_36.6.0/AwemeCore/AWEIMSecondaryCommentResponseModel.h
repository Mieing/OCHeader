@class NSArray;

@interface AWEIMSecondaryCommentResponseModel : AWEBaseApiModel

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSArray *comments;
@property (nonatomic) BOOL hasMore;

+ (id)commentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
