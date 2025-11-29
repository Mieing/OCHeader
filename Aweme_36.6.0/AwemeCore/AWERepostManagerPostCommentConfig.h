@class NSString, NSDictionary, AWEAwemeModel;

@interface AWERepostManagerPostCommentConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *replyCommentID;
@property (copy, nonatomic) NSString *replyUid;
@property (nonatomic) long long replyFollowStatus;
@property (copy, nonatomic) NSDictionary *extraLog;

- (void).cxx_destruct;

@end
