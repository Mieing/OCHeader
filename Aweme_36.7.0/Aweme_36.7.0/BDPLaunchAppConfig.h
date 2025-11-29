@class NSString;

@interface BDPLaunchAppConfig : NSObject

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *androidPackageName;
@property (copy, nonatomic) NSString *androidDownloadAppUrl;
@property (copy, nonatomic) NSString *iOSAppleID;

+ (void)bootstrapLaunch;

- (void).cxx_destruct;

@end
