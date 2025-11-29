@class AWECommentModel, NSString, NSDictionary, AWEAwemeModel;

@interface AWERepostManagerReportCommentConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (copy, nonatomic) NSString *commentId;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (retain, nonatomic) AWECommentModel *firstCommentModel;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long commentIndex;
@property (copy, nonatomic) NSDictionary *extraLogDict;

- (void).cxx_destruct;

@end
