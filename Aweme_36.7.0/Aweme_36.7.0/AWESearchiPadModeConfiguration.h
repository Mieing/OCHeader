@interface AWESearchiPadModeConfiguration : NSObject

+ (BOOL)isSearchNeedWaterFallLayout;
+ (double)getSuitableScreenWidth:(double)a0;
+ (double)getSuitableScreenWidthWithLimit:(double)a0;
+ (long long)defaultColumnNum;
+ (double)defaultItemGap;
+ (id)padMultipleUIConfig;
+ (double)duxGridGutterWithView:(id)a0;
+ (double)duxGridMarginWithView:(id)a0;
+ (long long)columnNumWithView:(id)a0;
+ (id)padMultipleColumnCofig;
+ (long long)defaultColumnNumDowngrade:(id)a0;
+ (double)cellWidthWithView:(id)a0;
+ (double)bannerWidth;
+ (BOOL)isContainerSizeChanged:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
+ (double)defaultMargin;
+ (BOOL)isLandscape;
+ (double)defaultColumnWidth;

@end
