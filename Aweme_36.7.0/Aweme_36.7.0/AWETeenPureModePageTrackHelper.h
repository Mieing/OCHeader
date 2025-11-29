@interface AWETeenPureModePageTrackHelper : NSObject

+ (id)transferExitMethodToString:(long long)a0;
+ (void)trackPinchZoomExitWithAweme:(id)a0 enterFrom:(id)a1 duration:(double)a2 exitMethod:(long long)a3;
+ (id)tansferZoomTypeToString:(long long)a0;
+ (void)trackChangeSpeedModeWithAweme:(id)a0 enterFrom:(id)a1 speedValue:(id)a2;
+ (void)trackPinchZoomWithAweme:(id)a0 enterFrom:(id)a1 duration:(double)a2 zoomType:(long long)a3;

@end
