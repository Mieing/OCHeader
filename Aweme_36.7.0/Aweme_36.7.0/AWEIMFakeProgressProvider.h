@class NSTimer, AWEIMAttachmentSpeedTestResultModel, NSDate;

@interface AWEIMFakeProgressProvider : NSObject

@property (nonatomic) double scale;
@property (nonatomic) double progress;
@property (nonatomic) int fileType;
@property (copy, nonatomic) id /* block */ progressListener;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) AWEIMAttachmentSpeedTestResultModel *speedModel;
@property (nonatomic) long long dataSize;
@property (nonatomic) long long uploadDuration;

- (void)p_startTimer;
- (void)p_addObverse;
- (void)p_updateProgressValue;
- (double)p_easeInOutQuadWithElapsedTimeMs:(double)a0 startValue:(double)a1 endValue:(double)a2 totalDuration:(double)a3;
- (void)registerProgressListenerWith:(int)a0 progressListener:(id /* block */)a1;
- (void)complete;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
