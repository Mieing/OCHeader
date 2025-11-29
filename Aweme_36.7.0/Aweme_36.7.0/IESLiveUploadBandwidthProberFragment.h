@class NSString;
@protocol IESLiveAnchorUploadBandwidthProberService;

@interface IESLiveUploadBandwidthProberFragment : IESLiveGuideComponent <IESLiveGuideStartLiveEvent>

@property (retain, nonatomic) id<IESLiveAnchorUploadBandwidthProberService> proberService;
@property (nonatomic) unsigned long long liveType;
@property (nonatomic) long long networkStatus;
@property (nonatomic) BOOL alreadyTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)onNetworkStatusChanged:(id)a0;
- (void)willSwitchToOtherTab;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)willStartLive;
- (void)willCloseGuideViewController;
- (id)stringfromLiveType;
- (void)beginStartLiveRequesting;
- (void)resetTrackParams;
- (void)liveTypeChangeAction:(unsigned long long)a0;
- (void).cxx_destruct;

@end
