@class NSString;

@interface AFDPureModePageTrackHelper : NSObject <AWEPureModePageTrackHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackPinchZoomExitWithAweme:(id)a0 enterFrom:(id)a1 referString:(id)a2 duration:(double)a3 exitMethod:(long long)a4;
+ (void)trackLandscapeEntranceShowWithAweme:(id)a0 referString:(id)a1;
+ (void)trackChangeSpeedModeWithAweme:(id)a0 enterFrom:(id)a1 speedValue:(double)a2 logExtraDict:(id)a3;
+ (void)trackRequestAPIDuration:(double)a0 apiName:(id)a1 isInitFetch:(BOOL)a2;
+ (id)contentTypeForAweme:(id)a0;
+ (void)trackEnterPinchDuration:(double)a0 method:(id)a1;
+ (void)trackExitPinchDuration:(double)a0 method:(id)a1;
+ (void)trackPinchViewDuration:(long long)a0 awemeModel:(id)a1 enterFrom:(id)a2 readCount:(long long)a3 extraParams:(id)a4;
+ (void)trackSmallWindowModeAutoSlideWithAweme:(id)a0 enterMethod:(id)a1;
+ (void)trackSmallWindowVideoPlayWithAweme:(id)a0 enterMethod:(id)a1 enterFrom:(id)a2;
+ (void)trackEnterSmallWindowModeWithEnterMethod:(id)a0 contentType:(id)a1 model:(id)a2;
+ (void)trackSmallWindowModeDuration:(long long)a0 enterMethod:(id)a1 contentType:(id)a2;
+ (void)trackCloseSmallWindowMode:(id)a0 enterMethod:(id)a1;
+ (void)trackFullScreenSmallWindowMode:(id)a0;
+ (void)trackFastSkipInterval:(double)a0 enterMethod:(id)a1 isSmallWindow:(BOOL)a2 isPinchBackground:(BOOL)a3 awemeModel:(id)a4;
+ (void)trackSmallWindowSnackbarShow;
+ (void)trackSmallWindowSnackbarClick;
+ (void)trackEnterPinchBackgroundMode;
+ (void)trackFastSkipInterval:(double)a0 isSmallWindow:(BOOL)a1 isPinchBackground:(BOOL)a2 awemeModel:(id)a3;
+ (void)trackClickProgressBarWithAweme:(id)a0 referString:(id)a1 isPlaying:(BOOL)a2 isSlideBack:(BOOL)a3 seekDuration:(double)a4 finished:(BOOL)a5 isPinchBackground:(BOOL)a6;
+ (void)trackPinchBackgroundModeDuration:(long long)a0 isSmallWindow:(BOOL)a1;
+ (id)transferExitMethodToString:(long long)a0;
+ (void)trackClickComponentButtonWithAweme:(id)a0 enterFrom:(id)a1 playStatusBefore:(BOOL)a2 playStatusAfter:(BOOL)a3 volumeStatusBefore:(BOOL)a4 volumeStatusAfter:(BOOL)a5 buttonType:(id)a6;
+ (id)longPressParamsWithEnterMethod:(id)a0 eventName:(id)a1;
+ (void)trackSmallWindowVideoPlayWithAweme:(id)a0 enterFrom:(id)a1;
+ (void)trackCloseSmallWindowMode:(id)a0;
+ (void)trackSmallWindowModeAutoSlideWithAweme:(id)a0;
+ (void)trackPinchChangeCompilationWithAweme:(id)a0 enterMethod:(id)a1;
+ (void)trackLandscapeEntranceByClick:(BOOL)a0 withAweme:(id)a1 referString:(id)a2 currentPlayTime:(double)a3 videoDuration:(double)a4;


@end
