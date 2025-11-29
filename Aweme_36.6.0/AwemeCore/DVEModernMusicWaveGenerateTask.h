@class NSURL, NSString, NSMutableArray;

@interface DVEModernMusicWaveGenerateTask : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (retain, nonatomic) NSURL *audioURL;
@property (copy, nonatomic) NSString *descriptionKey;
@property (nonatomic) unsigned long long pointsCount;
@property (retain, nonatomic) NSMutableArray *wavePoints;
@property (nonatomic) unsigned long long generateWavePointsTimes;
@property (nonatomic) unsigned long long successGenerateWavePointsTimes;
@property (copy, nonatomic) id /* block */ generateWavePointsProgress;
@property (copy, nonatomic) id /* block */ generateWavePointsCompletion;

- (id)buildErrorWithErrorCode:(long long)a0;
- (id)initWithAudioURL:(id)a0 descriptionKey:(id)a1 pointsCount:(unsigned long long)a2;
- (void)didCancel;
- (void).cxx_destruct;
- (void)finish;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (void)cancel;
- (BOOL)isFinished;

@end
