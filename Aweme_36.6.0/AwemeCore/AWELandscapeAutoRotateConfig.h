@class NSString;

@interface AWELandscapeAutoRotateConfig : NSObject <AWELandscapeAutoRotateConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)delayBeginMonitor;
+ (BOOL)updateEntryViewWhenAppear;
+ (BOOL)canSupportLandscapeBoth;
+ (BOOL)isAutoRotateSwitchOpen;
+ (id)autoRotateSwitchStatusSource;
+ (BOOL)shouldShowAutoRotateSwitch;
+ (void)openAutoRotateSwitch:(BOOL)a0 byStrategy:(BOOL)a1;
+ (long long)autoRotateSwitchStrategy;
+ (double)lastEnterLandscapeTime;
+ (void)addGuideToastShowTimes;
+ (BOOL)canShowGuideToast;
+ (void)recordEnterLandscape;
+ (BOOL)canAutoRoteScreenOrientation;
+ (void)openAutoRotateSwitch:(BOOL)a0;
+ (void)turnOnAutoRotateSwitchByStrategyIfNeeded;
+ (long long)autoRotateStyle;
+ (BOOL)autoRotateSwitch;


@end
