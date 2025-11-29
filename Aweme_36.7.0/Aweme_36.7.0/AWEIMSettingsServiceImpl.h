@class NSString;

@interface AWEIMSettingsServiceImpl : NSObject <IESIMSettingsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1;

@end
