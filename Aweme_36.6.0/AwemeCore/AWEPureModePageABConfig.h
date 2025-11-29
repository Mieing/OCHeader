@class NSString;

@interface AWEPureModePageABConfig : NSObject <AWEPureModePageSettingsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSlideInPureMode;
+ (BOOL)fixSlideInPureMode;
+ (id)fixedButtonFeedAllowList;
+ (long long)pureModePageSupportDanmakuType;
+ (BOOL)fixScaleModeAfterScroll;
+ (BOOL)enableGestureStrengthenGuide;
+ (double)leftLimitHeightForGestureStrengthenGuide;
+ (id)pinchGuideConfig;
+ (BOOL)enableLongPressLockToPureMode;
+ (BOOL)enableDetailFeedPureModeEntrance:(id)a0;


@end
