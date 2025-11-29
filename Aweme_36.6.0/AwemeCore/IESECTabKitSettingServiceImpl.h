@class NSString;

@interface IESECTabKitSettingServiceImpl : NSObject <IESECTabKitSettingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableTabKitDeepLinkPrefetchForBizTag:(id)a0;
+ (id)settingForKeyPath:(id)a0 defaultValue:(id)a1;


@end
