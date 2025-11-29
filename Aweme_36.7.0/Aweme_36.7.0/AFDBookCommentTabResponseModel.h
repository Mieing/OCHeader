@class NSString, AFDBookUserCommentModel;

@interface AFDBookCommentTabResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *commentTabInfo;
@property (retain, nonatomic) AFDBookUserCommentModel *userComment;

+ (id)userCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
