@class NSString;

@interface TTAccountSSOAuthCallbackContext : NSObject

@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL isForLogin;
@property (readonly, copy, nonatomic) NSString *event;

- (void)configureWithRequestReason:(long long)a0;
- (id)initWithRequestReason:(long long)a0;
- (BOOL)isAuthBindPath;
- (void).cxx_destruct;

@end
