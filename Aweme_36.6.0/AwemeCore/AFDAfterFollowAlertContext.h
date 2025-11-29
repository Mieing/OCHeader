@class NSString, AWEUserModel;

@interface AFDAfterFollowAlertContext : NSObject

@property (copy, nonatomic) NSString *mobileKey;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL isEnterprise;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
