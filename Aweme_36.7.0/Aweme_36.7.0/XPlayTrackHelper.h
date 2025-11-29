@class NSDictionary, NSString;
@protocol XPlayItemProtocol;

@interface XPlayTrackHelper : NSObject

@property (nonatomic) double ts;
@property (retain, nonatomic) NSDictionary *outterExtraInfo;
@property (retain, nonatomic) NSDictionary *podInfo;
@property (weak, nonatomic) id<XPlayItemProtocol> item;
@property (copy, nonatomic) NSString *curGameOrderId;
@property (nonatomic) long long playStatus;
@property (nonatomic) long long streamState;

- (void)trackEvent:(id)a0 extra:(id)a1;
- (void)trackSDKInitSuccess;
- (void)trackSDKInitFailedWithState:(unsigned long long)a0 result:(long long)a1;
- (void)trackEvent:(id)a0 category:(id)a1;
- (void)trackEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 addCore:(BOOL)a4;
- (void)teaTrackEvent:(id)a0 params:(id)a1;
- (void)trackTeaVidExperimentExposure:(id)a0;
- (void)teaTrackEvent:(id)a0 params:(id)a1 addCostTime:(BOOL)a2;
- (void)trackEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)trackStartHeartBeat:(id)a0 leftTime:(long long)a1;
- (void)trackUpdateTimeFrom:(id)a0 leftPlayTime:(long long)a1 newPlayTime:(long long)a2;
- (void)trackPlayFailedWithState:(unsigned long long)a0 result:(long long)a1;
- (void)trackFirstFrameFailedWithResultCode:(long long)a0 message:(id)a1;
- (void)trackEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 addEventTime:(BOOL)a4;
- (void)trackPlaySuccess;
- (void)trackFirstFrame:(id)a0;
- (void)trackEvent:(id)a0 category:(id)a1 metric:(id)a2;
- (void)trackEvent:(id)a0 category:(id)a1 extra:(id)a2;
- (void)trackEvent:(id)a0 info:(id)a1 addEventTime:(BOOL)a2 addCore:(BOOL)a3;
- (void)trackEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 addCore:(BOOL)a4 addEventTime:(BOOL)a5;
- (id)getCurrentRunningGameIds;
- (void)trackSDKInitResultWithState:(unsigned long long)a0 result:(long long)a1;
- (void)trackEvent:(id)a0 cost:(long long)a1 state:(unsigned long long)a2 result:(long long)a3;
- (void)trackPlayResultWithState:(unsigned long long)a0 result:(long long)a1;
- (void)trackEvent:(id)a0 info:(id)a1;
- (void)trackEvent:(id)a0 info:(id)a1 addEventTime:(BOOL)a2;
- (void)trackEvent:(id)a0 info:(id)a1 addCore:(BOOL)a2;
- (void)addOutterExtraTrackerInfo:(id)a0;
- (void)addPodInfo:(id)a0;
- (void)trackIncreaseTime:(int)a0 message:(int)a1;
- (void)trackIncreaseTimeResult:(int)a0 message:(id)a1;
- (void).cxx_destruct;
- (BOOL)isIpad;
- (void)trackEvent:(id)a0;
- (id)initWithItem:(id)a0;

@end
