@class NSArray;

@interface AWEPostMultiCommentResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *comments;

+ (id)commentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
