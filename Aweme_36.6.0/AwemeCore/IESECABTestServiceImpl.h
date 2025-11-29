@class NSString;

@interface IESECABTestServiceImpl : HTSService <IESECABTestService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ABTestCaseWithPropertyName:(id)a0;
+ (id)dictionaryValueWithABTestLibraKey:(id)a0;
+ (id)stringValueWithABTestLibraKey:(id)a0;
+ (int)integerValueWithABTestLibraKey:(id)a0;
+ (BOOL)letHostPostkBDCommonABTestSDKUserChangeNotificationWhenAccountLoginStateChanged;
+ (void)overrideSettings:(id)a0;


@end
