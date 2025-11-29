@class NSString;

@interface AWEAutoTestAppExtraInfoInject : NSObject <AWESettingsComboRequestProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestParamsDictionary;


@end
