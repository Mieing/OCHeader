@class NSString;

@interface IESLocalLifeResourcesHostService : HTSService <IESLocalLifeResourcesHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dux_iconNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
+ (id)iesll_defaultBundlePath;
+ (id)dux_iconNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2 inTheme:(id)a3;
+ (id)dux_iconNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 uiColor:(id)a2;


@end
