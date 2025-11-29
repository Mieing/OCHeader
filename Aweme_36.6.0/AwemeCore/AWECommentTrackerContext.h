@class AWECommentModel, NSString, NSDictionary, AWEAwemeModel;
@protocol AWECommentGeneralModelProtocol;

@interface AWECommentTrackerContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) unsigned long long enterSource;
@property (nonatomic) unsigned long long eventSource;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWECommentGeneralModelProtocol> generalModel;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (retain, nonatomic) AWECommentModel *replySubComment;
@property (retain, nonatomic) AWECommentModel *replyComment;
@property (retain, nonatomic) AWECommentModel *firstComment;
@property (copy, nonatomic) NSString *content;

- (void).cxx_destruct;

@end
