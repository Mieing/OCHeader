@interface ACCLangRegionLisener : NSObject

+ (id)shareInstance;

- (id)languageChangedNotification;
- (id)regionChangedNotification;
- (id)init;

@end
