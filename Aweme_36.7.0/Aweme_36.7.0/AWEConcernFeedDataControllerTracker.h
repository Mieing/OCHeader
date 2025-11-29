@interface AWEConcernFeedDataControllerTracker : NSObject

+ (void)trackError:(id)a0;
+ (void)trackAccuracyCheckWithNoticeType:(id)a0 response:(id)a1;
+ (void)trackResponseWithYellowDot:(id)a0;
+ (void)trackFollowChannelWithNewItemCount:(id)a0 newRoomCount:(id)a1 logPb:(id)a2;
+ (void)monitorEmptyFeedWithResponse:(id)a0 isFilterEmpty:(BOOL)a1 error:(id)a2;
+ (void)trackDeleteDuplicatedItems:(id)a0 requestID:(id)a1;
+ (void)trackResponseWithPushIfNeed:(id)a0;
+ (id)noticeCountLaunchParam;

@end
