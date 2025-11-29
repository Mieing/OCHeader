@class NSString;

@interface AWELynxKitModule : NSObject <AWEAppBytedSettingMessage, HTSAppLifeCycle, HTSService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
