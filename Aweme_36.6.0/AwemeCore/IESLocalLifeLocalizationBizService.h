@class NSString;

@interface IESLocalLifeLocalizationBizService : HTSService <IESLocalLifeLocalizationBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)alpEnableForGroup:(id)a0;
+ (void)alpRegisterObject:(id)a0 forGroup:(id)a1;
+ (id)localizedStringForString:(id)a0;


@end
