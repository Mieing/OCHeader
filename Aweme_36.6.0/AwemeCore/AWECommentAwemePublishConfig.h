@class AWECommentModel, NSString, NSDictionary;

@interface AWECommentAwemePublishConfig : NSObject

@property (retain, nonatomic) AWECommentModel *commentModel;
@property (copy, nonatomic) NSString *awemeAuthorName;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *awemeAuthorID;
@property (copy, nonatomic) NSDictionary *paramsDict;

- (void).cxx_destruct;

@end
