@class NSString, AWEOriginalAdModel;

@interface AWEAdHorizontalVideoTrackerPlugin : NSObject <AWEGokuPluginTargetProtocol, AWEGokuBridgeTrackerMessage, AWEGokuBridgePlayVideoViewControllerMessage>

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *refer;
@property (nonatomic) long long order;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (weak, nonatomic) id playerController;
@property (nonatomic) BOOL allowTrackBreak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangePlaybackStateWithAction:(id)a0;
- (void)playerWillLoopPlayingWith:(id)a0;
- (void)horizontalVideoTrackVideoBreakWith:(id)a0;
- (void)fillAdTrackContext:(id)a0;
- (id)initWithEventName:(id)a0 refer:(id)a1 order:(long long)a2 adModel:(id)a3 playerController:(id)a4;
- (void).cxx_destruct;
- (unsigned long long)moduleNames;

@end
