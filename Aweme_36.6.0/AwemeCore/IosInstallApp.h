@class NSString;

@interface IosInstallApp : GPBMessage

@property (copy, nonatomic) NSString *appScheme;
@property (copy, nonatomic) NSString *appName;

+ (id)descriptor;

@end
