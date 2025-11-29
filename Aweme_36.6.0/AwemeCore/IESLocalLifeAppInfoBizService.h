@class NSString;

@interface IESLocalLifeAppInfoBizService : HTSService <IESLocalLifeAppInfoBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)versionName;
+ (unsigned long long)languageStyle;
+ (unsigned long long)currentColorSuit;
+ (id)deviceId;
+ (id)channel;
+ (id)appId;
+ (id)currentLanguage;
+ (id)versionCode;


@end
