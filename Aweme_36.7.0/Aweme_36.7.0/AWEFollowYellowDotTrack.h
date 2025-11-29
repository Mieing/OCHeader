@interface AWEFollowYellowDotTrack : NSObject

+ (void)trackClickYellowDotAndRequestFollowDataWithIsFromSort:(BOOL)a0;
+ (double)getReceivePushTimeInterval;
+ (void)trackReceivePushEnterFollowFeedWithParams:(id)a0;
+ (void)setReceivePushTimeInterval:(double)a0;
+ (void)trackConsumeFollowYellowDotWithParmas:(id)a0;
+ (void)trackReceiveFollowTabNotices;
+ (void)trackFollowNoticeExtraWithScene:(id)a0 params:(id)a1;
+ (void)trackSocialCountRequestResult:(id)a0 source:(long long)a1;

@end
