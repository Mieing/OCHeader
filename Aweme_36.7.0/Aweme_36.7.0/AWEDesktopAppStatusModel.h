@class NSDictionary;

@interface AWEDesktopAppStatusModel : NSObject

@property (copy, nonatomic) NSDictionary *widgetInstallationFromSnapDict;
@property (copy, nonatomic) NSDictionary *widgetInstallationDict;
@property (copy, nonatomic) NSDictionary *widgetStatusDetailDict;
@property (copy, nonatomic) NSDictionary *shortcutInstallInfo;

- (void).cxx_destruct;

@end
