@class AWEFeedLongPressLockSpeedGuideView;

@interface AWEFeedLockSpeedManager : NSObject

@property (retain, nonatomic) AWEFeedLongPressLockSpeedGuideView *guideView;

+ (BOOL)shouldLockSpeedAndShowCapsule;
+ (long long)getTriggerLockSwipeType;
+ (long long)getTriggerLockDistance;
+ (BOOL)unsupportedLockSpeedListWithAweme:(id)a0;
+ (double)getGuideTriggerTime;
+ (long long)getGuideCount;
+ (id)longPressLockSpeedConfig;
+ (BOOL)longPressModalEdgeUpSwipeEnable;
+ (BOOL)lockSpeedShowCapsuleButton;
+ (long long)longPressModalEdgeUpSwipeThreshold;
+ (BOOL)longPressLockSpeedEnable;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
