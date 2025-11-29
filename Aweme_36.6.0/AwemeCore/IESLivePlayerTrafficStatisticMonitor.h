@class NSString;
@protocol IESLivePlayerTrafficStatisticMonitorDelegate;

@interface IESLivePlayerTrafficStatisticMonitor : NSObject

@property (nonatomic) long long appState;
@property (nonatomic) long long netState;
@property (nonatomic) long long totalUsed;
@property (nonatomic) long long pollingTotalDownload;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL allowMonitor;
@property (weak, nonatomic) id<IESLivePlayerTrafficStatisticMonitorDelegate> delegate;

- (void)endRecord;
- (id)stableTrafficInfo;
- (id)usedTrafficInfo;
- (void)beginRecord;
- (id)playStopInfo;
- (id)recordInfo:(id)a0;
- (id)causeReasonForState:(long long)a0 isWifi:(BOOL)a1;
- (void)updateCheckPointWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)networkStateDidChange;

@end
