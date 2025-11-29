@class AWECommentModel, NSString;

@interface AFDBookCommentResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWECommentModel *comment;
@property (copy, nonatomic) NSString *secondVerifyType;

+ (id)commentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
