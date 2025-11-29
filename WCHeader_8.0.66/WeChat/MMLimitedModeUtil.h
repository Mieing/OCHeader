@interface MMLimitedModeUtil : NSObject

+ (id)descForLevel:(long long)a0 bizType:(long long)a1;
+ (id)titleForBizType:(long long)a0;
+ (id)imageForBizType:(long long)a0 iconSize:(struct CGSize { double x0; double x1; })a1;
+ (id)extraDescForLevel:(long long)a0 bizType:(long long)a1;
+ (id)subTitleForBizType:(long long)a0 bizType:(long long)a1;
+ (id)getTitleFromXlabOption:(id)a0;
+ (void)removeTargeIndexViewContrller:(id)a0 viewContrllerIndex:(long long)a1;
+ (void)popToSettingPageFrom:(id)a0;
+ (id)limitedModeTitle;
+ (void)showLimitedModeTip:(id)a0;
+ (BOOL)EnableFindPasswordOptimize;
+ (id)mmLimitedModeBizTypeMapToString:(long long)a0;
+ (id)MMLimitedModeLevelMapToString:(long long)a0;

@end
