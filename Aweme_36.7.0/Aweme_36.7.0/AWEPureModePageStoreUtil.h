@class NSString;

@interface AWEPureModePageStoreUtil : NSObject <AWEPureModePageStoreUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)recordEnterPureModeWithPinchTime;
+ (void)recordShowSnackbar;
+ (long long)countForSnackbarShowUp;
+ (double)timeForEnterPureModeWithPinch;
+ (double)timeForSnackbarShowUp;
+ (BOOL)checkTimestampIsToday:(double)a0;
+ (void)recordShowGuide;
+ (long long)countForGuideShow;
+ (id)guideCountKey;
+ (void)recordCloseSnackbar;
+ (BOOL)hasClosedSnackbar;
+ (void)recordShowLongPressSlideUpGuide;
+ (void)recordEnterPinchWithLongPressSlideUp;
+ (BOOL)shouldShowLongPressSlideUpGuide;


@end
