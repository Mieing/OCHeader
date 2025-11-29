@class NSString;

@interface IESLocalLifeAppInfoHostService : HTSService <IESLocalLifeAppInfoHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)versionName;
+ (id)deviceId;
+ (id)channel;
+ (id)appId;
+ (id)versionCode;

- (unsigned long long)languageStyle;
- (id)currentLanguage;

@end
