@class NSSet, NSDictionary, NSArray;

@interface DUXABConfigManager : NSObject

@property (nonatomic) BOOL duxEnableCache;
@property (nonatomic) BOOL duxFixCacheNilCrash;
@property (nonatomic) BOOL duxPopoverEnable12pxRadius;
@property (nonatomic) BOOL duxBottomNotiAdaptBreakPoint;
@property (nonatomic) BOOL duxInAppNotiAdaptBreakPoint;
@property (nonatomic) BOOL duxAlertDialogAdaptBreakPoint;
@property (nonatomic) BOOL duxActionSheetAdaptBreakPoint;
@property (nonatomic) BOOL duxContentSheetAdaptBreakPoint;
@property (nonatomic) BOOL duxPopoverRotateAdaptEnable;
@property (nonatomic) BOOL duxAlertDialogBugFix;
@property (nonatomic) BOOL duxAlertDialogDefaultApply;
@property (nonatomic) BOOL duxTabbarBugfix;
@property (nonatomic) BOOL duxStopAnimationWhenHidden;
@property (nonatomic) BOOL duxNotReferIconUpload;
@property (copy, nonatomic) NSSet *duxNotReferIconSet;
@property (copy, nonatomic) NSDictionary *duxBigFontAdaptConfig;
@property (nonatomic) BOOL duxPopoverBootstrapIconColorOptimize;
@property (copy, nonatomic) NSDictionary *duxSmallScreenDeviceScaleLimitConfig;
@property (nonatomic) BOOL duxContentSheetUpdateAnimateOptimize;
@property (copy, nonatomic) NSDictionary *duxFontRegisterMonitorConfig;
@property (nonatomic) BOOL duxOnlineFontLoadLimitOn;
@property (nonatomic) long long duxOnlineFontLoadLimitCount;
@property (nonatomic) double duxOnlineFontLoadLimitInterVal;
@property (nonatomic) BOOL duxPartialSheetFixBlockExpandGestureEnable;
@property (nonatomic) BOOL duxPadNotFullScreenOptimize;
@property (nonatomic) BOOL duxParticleLoadingToAnimaX;
@property (nonatomic) BOOL duxAnimaXStopMonitorEnable;
@property (retain, nonatomic) NSArray *duxUIOptConfigArray;
@property (nonatomic) BOOL duxSmallBreakpointAdapter;
@property (nonatomic) BOOL duxBadgeCornerOpt;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;

@end
