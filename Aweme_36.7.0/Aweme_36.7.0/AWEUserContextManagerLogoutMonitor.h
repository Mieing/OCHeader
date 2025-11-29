@class NSDate;

@interface AWEUserContextManagerLogoutMonitor : NSObject

@property (nonatomic) long long switchAccount;
@property (retain, nonatomic) NSDate *startLogoutDate;
@property (retain, nonatomic) NSDate *logoutSuccessDate;

- (void).cxx_destruct;
- (id)init;

@end
