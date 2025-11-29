@class AWECommentModel;

@interface AWECreateAwemeCommentInfoModel : ACCBaseApiModel

@property (retain, nonatomic) AWECommentModel *comment;

+ (id)commentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
