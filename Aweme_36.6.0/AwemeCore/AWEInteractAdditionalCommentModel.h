@class NSNumber, AWECommentModel, NSString;

@interface AWEInteractAdditionalCommentModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *mergeCount;
@property (retain, nonatomic) AWECommentModel *currentComment;
@property (retain, nonatomic) AWECommentModel *level1Comment;
@property (nonatomic) BOOL commentUnvisible;
@property (copy, nonatomic) NSString *parentID;

+ (id)level1CommentJSONTransformer;
+ (id)currentCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
