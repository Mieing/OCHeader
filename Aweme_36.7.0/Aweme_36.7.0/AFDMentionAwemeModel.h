@class AWECommentModel, AWEUserModel, AWEAwemeModel;

@interface AFDMentionAwemeModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) unsigned long long mentionType;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) unsigned long long replyStatus;
@property (nonatomic) BOOL banEmoji;

+ (id)userJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)commentModelJSONTransformer;
+ (id)mentionTypeJSONTransformer;
+ (id)replyStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
