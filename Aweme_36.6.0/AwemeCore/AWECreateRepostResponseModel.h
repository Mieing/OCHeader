@class AWECommentModel, NSString, AWEAwemeModel;

@interface AWECreateRepostResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWECommentModel *comment;
@property (copy, nonatomic) NSString *labelInfo;
@property (copy, nonatomic) NSString *verifyType;

+ (id)awemeJSONTransformer;
+ (id)commentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
