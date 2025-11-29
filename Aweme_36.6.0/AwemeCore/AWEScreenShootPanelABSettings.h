@class NSString;

@interface AWEScreenShootPanelABSettings : NSObject <AWEScreenShootPanelABSettings>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)screenshotPanelFullImageEnable;
+ (int)screenshotPanelStyle;
+ (BOOL)screenshotSharePanelThumbnail;
+ (double)screenShotPanelDuration;


@end
