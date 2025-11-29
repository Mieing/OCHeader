@class NSString, WCBusinessJumpViewController;

@interface OpenSDKOpenBusinessViewContext : MMObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) unsigned long long miniProgramType;
@property (retain, nonatomic) WCBusinessJumpViewController *jumpViewController;

- (id)description;
- (void).cxx_destruct;

@end
