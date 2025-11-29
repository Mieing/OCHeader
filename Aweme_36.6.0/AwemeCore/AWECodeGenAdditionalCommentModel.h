@class NSString, AWECodeGenCommentModel;

@interface AWECodeGenAdditionalCommentModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenCommentModel *currentCommentModel;
@property (nonatomic) int commentUnvisible;
@property (nonatomic) BOOL isReplyComment;
@property (retain, nonatomic) AWECodeGenCommentModel *level1CommentModel;
@property (copy, nonatomic) NSString *parentId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
