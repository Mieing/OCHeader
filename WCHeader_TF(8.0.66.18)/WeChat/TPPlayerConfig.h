@class NSString;

@interface TPPlayerConfig : NSObject

@property long long platform;
@property (retain) NSString *guid;
@property long long proxyPlatform;
@property (retain) NSString *proxyOutNetIP;
@property (retain) NSString *userUin;
@property BOOL userIsVip;
@property (retain) NSString *abUserId;
@property (retain) NSString *appName;
@property (retain) NSString *appVersion;
@property (retain) NSString *appBuildVersion;
@property (retain) NSString *userUpc;
@property long long userUpcState;
@property BOOL dataReportEnable;
@property BOOL playerReportEnable;
@property BOOL newReportEnable;
@property (nonatomic) int checkServerTimeoutMs;
@property (nonatomic) int serverCheckTimeInterval;
@property (nonatomic) BOOL enableCheckLocalServer;
@property (nonatomic) BOOL enableCheckLocalServerOnCreate;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
