@class IESIMAudioInputGuard, NSString, NSTimer, NSURL, NSDate, NSObject, NSMutableArray;
@protocol AWEIMAudioRecorderInterface, AWEIMAudioMessageRecorderDelegate, OS_dispatch_queue, IESIMPCMAudioTranslatorProtocol;

@interface AWEIMAudioMessageRecorder : NSObject <AWEIMAudioRecorderDelegate, IESIMAudioMessageRecorderInterface>

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSString *oldAudioSessionCategory;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long audioFormat;
@property (retain, nonatomic) NSTimer *updatePowerTimer;
@property (retain, nonatomic) id<IESIMPCMAudioTranslatorProtocol> translator;
@property (retain, nonatomic) NSObject<AWEIMAudioRecorderInterface> *recorder;
@property (nonatomic) BOOL deleteFileAfterStopFlag;
@property (nonatomic) BOOL overTimeRecordSuccess;
@property unsigned long long status;
@property (nonatomic) float peakPower;
@property (retain, nonatomic) NSMutableArray *peakPowerArr;
@property (nonatomic) float averagePower;
@property (retain, nonatomic) NSMutableArray *averagePowerArr;
@property (nonatomic) double currentTime;
@property (nonatomic) double lastNotifyTime;
@property (retain, nonatomic) NSDate *startRecordingDate;
@property (retain, nonatomic) IESIMAudioInputGuard *inputGuard;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<AWEIMAudioMessageRecorderDelegate> delegate;
@property (nonatomic) double minSecond;
@property (nonatomic) double limitSecond;
@property (nonatomic) double thresholdSecondOfNotification;
@property (nonatomic) BOOL resignActive;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL isInTranslate;
@property (nonatomic) BOOL startTranslateBeforeInit;
@property (nonatomic) double fireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleDidEnterBackgroundNotification:(id)a0;
- (void)applicationWillResignActiveNoti:(id)a0;
- (void)handleAudioSessionInterruptionNotification:(id)a0;
- (BOOL)setAudioCategory:(id)a0 activeAudioSession:(BOOL)a1;
- (void)audioRecorderDidStartWithError:(id)a0;
- (void)updatePowerTimerFired:(id)a0;
- (double)p_getRecorderCurrentTime;
- (void)p_updateAveragePower:(double)a0 peakPower:(double)a1;
- (void)cancelWithAction:(unsigned long long)a0;
- (void)stopWithAction:(unsigned long long)a0;
- (id)initWithURL:(id)a0 audioFormat:(long long)a1 scene:(unsigned long long)a2;
- (void)p_trackAudioRecordPerformanceWithType:(id)a0 status:(BOOL)a1 errorCode:(long long)a2 isActive:(BOOL)a3;
- (BOOL)p_disableAsyncToRecordQueue;
- (void)recorderDidStoppedWithResult:(BOOL)a0 action:(unsigned long long)a1 error:(id)a2;
- (void)removeRecorder;
- (id)initWithURL:(id)a0 audioFormat:(long long)a1;
- (void)audioRecorderDidFinishRecording:(id)a0 successfully:(BOOL)a1 action:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)record;
- (void)clear;
- (void)dealloc;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)a0;
- (void)audioRecorderEncodeErrorDidOccur:(id)a0 error:(id)a1;

@end
