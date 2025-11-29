@class NSString;

@interface AWEECommerceLaunchTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeThemeTask;
+ (void)executePreloadInternalGeckoPackage;
+ (void)executeCommentSimilarProductTask;
+ (void)executeWidgetTask;
+ (BOOL)delayLaunchTaskOpt;
+ (void)executeCommon;
+ (void)executeMoreForLG;
+ (void)executeDelayTaskCommon;
+ (void)executeDelayTaskMoreForDouyin;
+ (void)execute;


@end
