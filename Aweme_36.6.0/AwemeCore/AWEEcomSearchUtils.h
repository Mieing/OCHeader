@interface AWEEcomSearchUtils : NSObject

+ (BOOL)cardUIOptEnable;
+ (long long)hybridCardGridType;
+ (long long)ecommerceCardGridType;
+ (double)cardCornerRadius:(BOOL)a0;
+ (double)singleCardMargin:(BOOL)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })feedBackPanelInsetWithWithHybrid:(BOOL)a0 single:(BOOL)a1;
+ (double)boxBannerCardBottomWithHybrid:(BOOL)a0 single:(BOOL)a1;
+ (double)cardColumnSpacingWithHybrid:(BOOL)a0 single:(BOOL)a1;
+ (double)cardInteritemSpacingWithHybrid:(BOOL)a0 single:(BOOL)a1;
+ (BOOL)isFromSuperMarket:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetWithHybrid:(BOOL)a0 single:(BOOL)a1;
+ (double)relatedWordsCardBottomHybrid:(BOOL)a0;
+ (BOOL)isIpad;

@end
