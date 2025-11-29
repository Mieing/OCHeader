@class AWECommentModel;

@interface AWECommentEntry : AWEBaseApiModel

@property (retain, nonatomic) AWECommentModel *comment;
@property (nonatomic) long long code;

+ (id)commentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
