@class NSString;

@interface WAThemeProxy : NSObject <IWAThemeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getValueOfProperty:(id)a0 inRuleSet:(id)a1;
+ (id)getRuleSetForSeletor:(id)a0;
+ (id)getColorByName:(id)a0;
+ (id)getColorByName:(id)a0 withAlpha:(double)a1;
+ (id)imageNamed:(id)a0;
+ (id)imageNamed:(id)a0 alpha:(double)a1;
+ (id)imageHighlightNamed:(id)a0;
+ (id)imageDisableNamed:(id)a0;
+ (id)imageFromColor:(id)a0;
+ (id)svgImageFromData:(id)a0;
+ (id)svgImageNamed:(id)a0 color:(id)a1;
+ (id)svgImageNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
+ (id)svgImageHighlightNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
+ (id)svgImageDisableNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
+ (id)getImageName:(id)a0;
+ (id)pathOfResNamed:(id)a0;
+ (void)reloadCssForMultiTaskingIfNeed;


@end
