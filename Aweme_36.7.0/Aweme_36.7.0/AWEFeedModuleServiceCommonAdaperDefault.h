@interface AWEFeedModuleServiceCommonAdaperDefault : NSObject

+ (id)recommendChannelTitle;
+ (id)mediumVideoChannelTitle;
+ (id)toastAppName;
+ (BOOL)shouldMediumVideoObserveDeviceID;
+ (BOOL)isMediumVideoChannelMute;

- (BOOL)canTrackClientShowInDetailWithAwemeType:(long long)a0 params:(id)a1;
- (id)getLoginViewTitleTextColor;
- (id)getLoginViewSubTitleTextColor;

@end
