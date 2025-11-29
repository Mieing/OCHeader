@class HTSEventContext, NSDictionary, NSString;
@protocol IESLiveMonitor;

@interface IESLiveScreencastTimelineImpl : NSObject <IESScreenshotTimeline> {
    double _createRoomTime;
    double _userStartTime;
    double _extLaunchTime;
    double _pageWillShowTime;
    double _readyPushTime;
    double _pushingTime;
    long long _reconnectTimes;
}

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) long long errorState;
@property (nonatomic) BOOL liveScreencastMultiDeviceEnable;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) NSDictionary *extErrorInfo;
@property (copy, nonatomic) NSDictionary *streamVideoFrameInfo;
@property BOOL audioIsRunning;
@property BOOL isHeadsetConnecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appWillTerminate;
- (void)micAudioInterrupted;
- (void)micAudioRestarted;
- (void)micAudioChanged:(id)a0 running:(BOOL)a1;
- (void)createRoom;
- (void)startAudioRecord;
- (void)stopAudioRecord;
- (void)extensionLaunched;
- (void)extensionLog:(id)a0;
- (void)reportCaptureInfo:(id)a0;
- (void)reportCaeResultInfo:(id)a0;
- (void)liveCoreWillConnect;
- (void)startPushing;
- (void)reportSessionLogWithState:(long long)a0 extra:(id)a1;
- (void)receiveStreamUpdateEncodeBitrate:(long long)a0;
- (void)cancelInGuide;
- (void)screenShotGuideDidShow;
- (void)extensionAHeadOfLaunch;
- (void)enterRoomSuccess;
- (void)extensionAbnormalExit;
- (id)getGameScreenStatusForTrack;
- (void)monitorScreenshotWith:(id)a0 code:(long long)a1;
- (id)sessionLogDescriptionWithState:(long long)a0;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
