@class AFDBookUserCommentModel;

@interface AFDBookUserCommentInfo : AWEBaseApiModel

@property (retain, nonatomic) AFDBookUserCommentModel *userComment;

+ (id)userCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
