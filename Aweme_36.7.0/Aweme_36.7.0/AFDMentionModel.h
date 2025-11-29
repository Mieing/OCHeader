@class AWECommentModel, AWEUserModel;

@interface AFDMentionModel : AWEBaseApiModel

@property (nonatomic) unsigned long long replyStatus;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) unsigned long long mentionType;
@property (nonatomic) BOOL banEmoji;

+ (id)JSONKeyPathsByPropertyKey;

- (id)replyCommentModel;
- (void).cxx_destruct;

@end
