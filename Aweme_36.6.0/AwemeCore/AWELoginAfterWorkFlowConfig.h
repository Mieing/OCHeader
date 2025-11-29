@class DYASecurityTicketModel, UIViewController, DYAAccountModel;

@interface AWELoginAfterWorkFlowConfig : NSObject

@property (retain, nonatomic) DYAAccountModel *account;
@property (retain, nonatomic) DYASecurityTicketModel *ticket;
@property (retain, nonatomic) UIViewController *currentViewController;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) BOOL nonageVerifyEnabled;
@property (nonatomic) BOOL userEditEnabled;

+ (id)configWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)description;

@end
