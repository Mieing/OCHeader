@class AWECommentModel, NSDictionary, AWEAwemeModel;

@interface AWECreateRepostControllerInitConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (retain, nonatomic) AWECommentModel *replyComment;
@property (retain, nonatomic) AWECommentModel *replySubComment;
@property (retain, nonatomic) id notificationObject;
@property (copy, nonatomic) NSDictionary *logDict;
@property (copy, nonatomic) id /* block */ sendRepostBlock;
@property (copy, nonatomic) id /* block */ needHideToastBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
