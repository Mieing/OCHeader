@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEStudioMeasureManager : NSObject

@property (nonatomic) BOOL cameraFirstLaunched;
@property (nonatomic) double clickPlusTimeStamp;
@property (nonatomic) BOOL enterRecordPageFromPlusButton;
@property (nonatomic) double viewDidLoadTimeStamp;
@property (nonatomic) double viewDidLoadedToFirstFrameAppearDuration;
@property (nonatomic) double viewDidAppearTimeStamp;
@property (nonatomic) double viewDidDisappearTimeStamp;
@property (nonatomic) double viewDidDisappearAfterAppearDuration;
@property (nonatomic) BOOL viewDidLoaded;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic) BOOL hadTrackDraftInfo;
@property (nonatomic) double draftClickStart;
@property (nonatomic) BOOL hadTrackEffectInfo;
@property (nonatomic) BOOL hadTrackCaptureIMG;
@property (nonatomic) double startRecordTime;
@property (nonatomic) double pauseRecordTime;

+ (id)sharedMeasureManager;

- (void)trackViewDidLoad;
- (void)trackViewDidAppear;
- (void)asyncOperationBlock:(id /* block */)a0;
- (void)asyncMonitorTrackService:(id)a0 status:(long long)a1 extra:(id)a2;
- (void)cancelTrackClickPlusTime;
- (void)trackClickPlusTime;
- (void)asyncMonitorTrackData:(id)a0 logTypeStr:(id)a1;
- (void)trackOfDraftClickEnd:(double)a0 trackParams:(id)a1;
- (void)trackOfDraftClickStart;
- (void)trackClickPlusToRecordPageFirstFrameAppearWithReferString:(id)a0;
- (double)p_currentTimeInterval;
- (void)trackEffectInfo;
- (void)cancelOnceTrack;
- (void)trackViewDidDisappear;
- (void)cancelTrackViewDidLoad;
- (void)asyncMonitorTrackService:(id)a0 value:(float)a1 extra:(id)a2;
- (void)trackOfDraftInfo:(long long)a0;
- (void)trackCaptureIMG:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
