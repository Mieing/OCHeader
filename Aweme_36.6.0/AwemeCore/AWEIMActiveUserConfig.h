@interface AWEIMActiveUserConfig : NSObject

+ (BOOL)enableActiveApiOptimize;
+ (long long)activeBufferInterval;
+ (long long)pullInterval;
+ (id)imUserActiveStatusConfig;
+ (BOOL)canPullNonFriendsActiveStatusWithSource:(unsigned long long)a0;
+ (id)__exemptedSourcesForPullingNonFriendActive;
+ (id)activeStatusPullSettings;
+ (double)serverUpdateThreshold;
+ (long long)groupDelayInterval;
+ (BOOL)canUpdateMyActiveStatus;
+ (BOOL)canPullNonFriendsActiveStatusWithSourceKey:(id)a0;
+ (long long)groupActiveCacheFreshIntervalWithIsOnline:(BOOL)a0;
+ (long long)singleActiveCacheFreshInterval;
+ (BOOL)canPullFriendActiveStatus;
+ (long long)updateInterval;

@end
