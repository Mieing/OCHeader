@interface AWEGeneralPadMultiColumnSwitchManager : NSObject

@property (nonatomic) long long layoutColumnNum;

+ (BOOL)doubleColumnExperienceOptimize;
+ (BOOL)enableSearchPadMultiOptV3;
+ (long long)padSearchColumnSwitchTypeAB;
+ (BOOL)enablePadMutilpleStyle;
+ (BOOL)shouldShowPadMutilpleColumn;
+ (double)getPadSingleColumnContainerWidth;
+ (BOOL)shouldShowPadSingleColumn;
+ (BOOL)isPadSingleColumn;
+ (double)getValidPadSingleWidthWithMargin:(BOOL)a0;
+ (double)getValidPadWidthWithMargin:(BOOL)a0;
+ (BOOL)isPad;
+ (id)sharedInstance;

@end
