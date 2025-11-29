@class NSString, NSMutableDictionary, AWEUGPendantActivityModel, UIView;
@protocol AWEUGPendantActivityControllerProtocol;

@interface AWEUGPendantActivityCollectionManager : NSObject

@property (retain, nonatomic) AWEUGPendantActivityModel *currentActivityModel;
@property (retain, nonatomic) AWEUGPendantActivityModel *nextActivityModel;
@property (retain, nonatomic) id<AWEUGPendantActivityControllerProtocol> currentActivityController;
@property (retain, nonatomic) NSString *activityTimerString;
@property (retain, nonatomic) NSMutableDictionary *adapterDelegtes;
@property (retain, nonatomic) AWEUGPendantActivityModel *fcoinTempActivityModel;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) unsigned long long activityType;
@property (weak, nonatomic) UIView *baseView;

- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (id)getSuperiorActivityModelWithTime:(double)a0;
- (id)getNextActivityModelWithTime:(double)a0;
- (void)monitorFeedPendantDataSourceRequestWithStatus:(unsigned long long)a0 andParams:(id)a1;
- (void)trackFeedPendantDataRequestLogWithMessage:(id)a0;
- (void)syncPendantActivity:(id)a0;
- (void)trackFeedPendantStageManagerLogWithMessage:(id)a0;
- (void)updateActivityTimer:(double)a0 current:(id)a1 next:(id)a2;
- (void)monitorPendantDisappearIfNeeded;
- (void)clearCurrentActivityData;
- (BOOL)isRuningActivity:(id)a0;
- (id)getCurrentActivityControllor:(id)a0;
- (void)trackFeedPendantPushLogWithMessage:(id)a0;
- (void)monitorPushServiceWithStatus:(unsigned long long)a0 commonParams:(id)a1 extra:(id)a2;
- (void)updateActivityController;
- (void)monitorShowBubbleEventWithExtraParams:(id)a0;
- (void)registerPendantAdapter:(id)a0 identify:(id)a1;
- (id)getCurrentActivityController;
- (BOOL)currentActivityIsShowingPendant;
- (void).cxx_destruct;

@end
