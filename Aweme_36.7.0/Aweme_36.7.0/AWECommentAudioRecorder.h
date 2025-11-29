@class NSObject, NSString, NSTimer, NSURL, NSDate, NSMutableArray, AVAudioRecorder;
@protocol OS_dispatch_queue, AWECommentAudioRecorderDelegate;

@interface AWECommentAudioRecorder : NSObject <AVAudioRecorderDelegate, AWECommentAudioRecorderProtocol>

@property (retain, nonatomic) NSString *oldAudioSessionCategory;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSTimer *updatePowerTimer;
@property (retain, nonatomic) AVAudioRecorder *recorder;
@property (nonatomic) BOOL deleteFileAfterStopFlag;
@property (nonatomic) BOOL overTimeRecordSuccess;
@property (nonatomic) unsigned long long status;
@property (nonatomic) float peakPower;
@property (retain, nonatomic) NSMutableArray *peakPowerArr;
@property (nonatomic) float averagePower;
@property (retain, nonatomic) NSMutableArray *averagePowerArr;
@property (nonatomic) double currentTime;
@property (nonatomic) double lastNotifyTime;
@property (retain, nonatomic) NSDate *startRecordingDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<AWECommentAudioRecorderDelegate> delegate;
@property (nonatomic) double minSecond;
@property (nonatomic) double limitSecond;
@property (nonatomic) double thresholdSecondOfNotification;
@property (nonatomic) BOOL resignActive;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) double fireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleDidEnterBackgroundNotification;
- (void)handleAudioSessionInterruptionNotification:(id)a0;
- (void)applicationWillResignActiveNoti;
- (void)applicationProtectedDataWillBecomeUnavailable;
- (void)trackCommentAudioAbnormalCaseWithType:(id)a0 errorCode:(long long)a1 isActive:(BOOL)a2;
- (BOOL)setAudioCategory:(id)a0 activeAudioSession:(BOOL)a1;
- (void)audioRecorderDidStartWithError:(id)a0;
- (void)updatePowerTimerFired:(id)a0;
- (double)p_getRecorderCurrentTime;
- (void)recorderDidStoppedWithResult:(BOOL)a0 error:(id)a1;
- (void)p_updateAveragePower:(double)a0 peakPower:(double)a1;
- (void).cxx_destruct;
- (void)record;
- (void)clear;
- (id)initWithURL:(id)a0;
- (void)stop;
- (void)dealloc;
- (void)cancel;
- (void)audioRecorderDidFinishRecording:(id)a0 successfully:(BOOL)a1;
- (void)audioRecorderEncodeErrorDidOccur:(id)a0 error:(id)a1;

@end
