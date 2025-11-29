@class NSString, NSArray, AWEAwemeModel;

@interface AWEIMCommentMentionGroupShareContextConfig : NSObject

@property (copy, nonatomic) NSString *plainText;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSArray *extraInfo;

- (void).cxx_destruct;

@end
