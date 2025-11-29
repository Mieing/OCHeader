@class AWECommentModel, AWERelativeUserModel;

@interface AWEFastReplyModel : AWEBaseApiModel

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) AWERelativeUserModel *user;
@property (retain, nonatomic) AWECommentModel *comment;

+ (id)userJSONTransformer;
+ (id)sceneJSONTransformer;
+ (id)commentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
