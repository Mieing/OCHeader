@class NSString, AWECommentModel, AWEAwemeModel;

@interface AWEIMCommentMentionGroupShareInfoConfig : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isLandScape;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWECommentModel *commentModel;

- (void).cxx_destruct;

@end
