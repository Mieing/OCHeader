@class NSString;

@interface IESLiveUGSettingServiceImpl : NSObject <IESLiveGetUGSettingsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accurateCurrentServerDate;
- (double)currentServerTimestampInMS;
- (void)getUGStaticSettingsWithKeys:(id)a0 completion:(id /* block */)a1 waitInit:(BOOL)a2;
- (void)getUGDynamicSettingsWithKeys:(id)a0 completion:(id /* block */)a1 waitInit:(BOOL)a2;
- (void)uploadTaskWithToken:(id)a0 uniqueID:(id)a1 extra:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)handleStaticSettings:(id)a0 keys:(id)a1 completion:(id /* block */)a2;
- (void)useUGSynsSettingWithKeys:(id)a0 completion:(id /* block */)a1;

@end
