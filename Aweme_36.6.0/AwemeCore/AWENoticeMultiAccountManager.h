@class NSString, AWEMultiAccountNoticeResponseModel;

@interface AWENoticeMultiAccountManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWEMultiAccountNoticeResponseModel *latestMultiAccountNoticesModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)updateMultiAccountNoticeIfNeed;
- (long long)latestMultiAccountNoticeUnreadCount;
- (BOOL)canRequestMultiAccountNoticeUnreadCount;
- (void)recordMultiAccountNoticeUnreadCountRequestTimeInterval;
- (void)resetMultiAccountNoticeUnreadCountRequestTimeInterval;
- (BOOL)shouldShowMultiAccountNoticeDot;
- (BOOL)multiAccountExitStrategyShouldHideDot;
- (void)setMultiAccountExitStrategyShouldHideDot:(BOOL)a0 isForStrategyOne:(BOOL)a1;
- (void)trackAccountMessageNoticeShowWithCount:(long long)a0 dotType:(id)a1 isForce:(BOOL)a2;
- (id)latestMultiAccountNotices;
- (void)getMultiAccountNoticesUnreadCountWithCompletion:(id /* block */)a0;
- (id)multiAccountNoticesConfigsModel;
- (long long)totalUnreadCountForMultiAccountNotices:(id)a0;
- (id)p_multiAccountExitStrategyTwoShouldHideDotKey;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end
