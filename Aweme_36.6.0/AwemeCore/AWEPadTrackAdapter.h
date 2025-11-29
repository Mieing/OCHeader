@class NSString, AWEPadChannelTracker;

@interface AWEPadTrackAdapter : HTSService <AWEPadTrackAdapter>

@property (retain, nonatomic) AWEPadChannelTracker *channelTracker;
@property (nonatomic) double ration;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL enableFix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendPadCommTrackParmas:(id)a0;
- (id)beginToTrackCurrentChannelWithAction:(long long)a0;
- (void)trackPadChannelRefreshWithMonitor:(id)a0;
- (void)buildChannelTrackMonitorWithEnterFrom:(id)a0 type:(long long)a1;
- (void)trackPadChannelRefreshWithMonitorInfo:(id)a0;
- (BOOL)enableTrackStuckFix;
- (void)updatePadCommonParams;
- (void).cxx_destruct;
- (id)init;

@end
