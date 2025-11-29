@class NSString;

@interface IESIMProjectXService : NSObject <IESIMProjectXService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isProjectXAppInstalled;
- (id)projectXAppID;
- (void)openOrShowInstallProjectXAlertWithEvent:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 messageStyle:(id)a3 customTitle:(id)a4 openHost:(id)a5 openParams:(id)a6;
- (void)reportProjectXInstallStatus:(id)a0;
- (BOOL)isProjectXConfigSettingsContainMessage:(id)a0;

@end
