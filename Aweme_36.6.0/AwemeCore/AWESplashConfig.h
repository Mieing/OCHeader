@class NSString;

@interface AWESplashConfig : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) id /* block */ timeMonitorBlock;
@property (copy, nonatomic) NSString *defaultUserAgentOfWebView;
@property (nonatomic) long long userMode;
@property (nonatomic) long long userPeriod;
@property (retain, nonatomic) Class fakeLaunchScreenClass;
@property (nonatomic) long long downgradeMode;

+ (id)dependencyInjection;

- (void).cxx_destruct;

@end
