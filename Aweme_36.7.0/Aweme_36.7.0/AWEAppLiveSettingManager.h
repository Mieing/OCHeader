@interface AWEAppLiveSettingManager : NSObject

+ (long long)timeGapOfAutoUpdateLiveState;
+ (BOOL)isLivePodcast;
+ (id)newAnchorShowBubbleSettings;
+ (BOOL)enableAutoUpdateLiveState;
+ (id)followFeedLiveSkylightURL;
+ (BOOL)deferLiveInitialize;

@end
