@class NSString;

@interface IESLocalLifeAppSettingHostService : HTSService <IESLocalLifeAppSettingHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeSettings;
+ (id)poiContentSettings;
+ (Class)aAWEPOISettingsManagerAdapterClass;

- (id)aAWEPOISettingsManagerAdapter;

@end
