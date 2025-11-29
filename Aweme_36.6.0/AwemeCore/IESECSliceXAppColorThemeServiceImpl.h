@class NSString;

@interface IESECSliceXAppColorThemeServiceImpl : NSObject <SLIAppColorThemeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)currAppTheme;
+ (void)registerAppThemeChangedActionBlock:(id /* block */)a0 withTargetObj:(id)a1;


@end
