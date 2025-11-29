@class TencentOAuth, NSString;

@interface TencentIncrAuthLogic : NSObject <TencentLoginDelegate>

@property (weak, nonatomic) TencentOAuth *tencentOAuth;
@property (copy, nonatomic) NSString *reportAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tencentDidNotLogin:(BOOL)a0;
- (void)tencentDidLogin;
- (void)tencentDidNotNetWork;
- (id)initWithTencentOAuth:(id)a0;
- (void).cxx_destruct;

@end
