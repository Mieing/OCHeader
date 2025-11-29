@class NSString;

@interface BDPTabBarPageConfig : NSObject

@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *iconPath;
@property (copy, nonatomic) NSString *selectedIconPath;

+ (void)bootstrapLaunch;

- (void).cxx_destruct;

@end
