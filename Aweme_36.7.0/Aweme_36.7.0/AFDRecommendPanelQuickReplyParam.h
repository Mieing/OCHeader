@class NSString, AWEUserModel, AWEAwemeModel;

@interface AFDRecommendPanelQuickReplyParam : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *referString;

- (void).cxx_destruct;

@end
