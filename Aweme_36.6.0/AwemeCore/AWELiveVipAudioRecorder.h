@class NSString, NSURL, NSDate, NSObject, AVAudioRecorder;
@protocol OS_dispatch_queue, AWELiveAudioMessageRecorderDelegate;

@interface AWELiveVipAudioRecorder : NSObject <AVAudioRecorderDelegate>

@property (retain, nonatomic) AVAudioRecorder *recorder;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property unsigned long long status;
@property (copy, nonatomic) NSString *oldAudioSessionCategory;
@property (retain, nonatomic) NSDate *startRecordingDate;
@property (nonatomic) double minSecond;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) double currentTime;
@property (nonatomic) BOOL deleteFileAfterStopFlag;
@property (weak, nonatomic) id<AWELiveAudioMessageRecorderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setAudioCategory:(id)a0 activeAudioSession:(BOOL)a1;
- (void)audioRecorderDidStartWithError:(id)a0;
- (void)recorderDidStoppedWithResult:(BOOL)a0 error:(id)a1;
- (void)handleRecordFailed;
- (double)getRecorderCurrentTime;
- (BOOL)checkIsInTheBackgroundQueue;
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
