@class NSString;

@interface AWEUserRecommendViewControllerContext : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *userNickname;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *recommendScene;
@property (nonatomic) long long prePageType;
@property (nonatomic) long long fromAction;
@property (nonatomic) long long showMethod;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ deleteAllUserBlock;

- (void).cxx_destruct;

@end
