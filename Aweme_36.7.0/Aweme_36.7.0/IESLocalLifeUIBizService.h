@class NSString;

@interface IESLocalLifeUIBizService : HTSService <IESLocalLifeUIBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iesll_convertIESLLConfigToAWEConfig:(id)a0;
+ (BOOL)iesll_bigFontModeOn;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iesll_characterRectAtIndex:(unsigned long long)a0 builder:(id)a1;
+ (id)iesll_awe_imageForButtonPresetClose;
+ (id)iesll_awe_imageForButtonPresetBack;
+ (id)iesll_awe_imageForButtonPresetCollected;
+ (void)iesll_unlockAfterDelay:(double)a0;

@end
