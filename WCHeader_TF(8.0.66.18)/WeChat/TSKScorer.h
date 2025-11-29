@class TSKScoreResultSet, NSString, NSOperationQueue, TSKScorerConfig;
@protocol TSKScorerDelegate;

@interface TSKScorer : NSObject {
    struct Scorer { struct unique_ptr<tsk::score::Scorer::Impl, std::default_delete<tsk::score::Scorer::Impl>> { struct __compressed_pair<tsk::score::Scorer::Impl *, std::default_delete<tsk::score::Scorer::Impl>> { struct Impl *__value_; } __ptr_; } impl_; } _scorer;
    struct unique_ptr<audiobase::dsp::PitchDetect, std::default_delete<audiobase::dsp::PitchDetect>> { struct __compressed_pair<audiobase::dsp::PitchDetect *, std::default_delete<audiobase::dsp::PitchDetect>> { struct PitchDetect *__value_; } __ptr_; } _pd;
}

@property (nonatomic) long long options;
@property (retain, nonatomic) TSKScorerConfig *config;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channels;
@property (retain, nonatomic) TSKScoreResultSet *scoreResultSet;
@property (retain, nonatomic) NSOperationQueue *scoreQueue;
@property (copy, nonatomic) id /* block */ seekExecutor;
@property (nonatomic) long long shiftValue;
@property (nonatomic) double reduceRatio;
@property (retain, nonatomic) NSString *mapString;
@property (weak, nonatomic) id<TSKScorerDelegate> delegate;
@property (copy, nonatomic) id /* block */ extraInfoBlock;

+ (long long)optionsForMidiScoreWithSampleRate:(int)a0;

- (id)newMidiCalculator;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })noteRange;
- (id)normalizedNotes;
- (id)initWithSampleRate:(int)a0 channels:(int)a1 options:(long long)a2 config:(id)a3 error:(id *)a4;
- (void)dealloc;
- (void)deinit:(BOOL)a0;
- (int)sentenceCount;
- (void)process:(const char *)a0 inSize:(int)a1 timestamp:(double)a2 curPitchs:(id)a3;
- (void)seek:(double)a0;
- (void)reset;
- (void)finishWithBlock:(id /* block */)a0;
- (void)setKeyShift:(long long)a0;
- (id)getScoreResult;
- (void)accessScoreResult:(id /* block */)a0;
- (void)seekSync:(double)a0;
- (void)seekAsync:(double)a0;
- (void)cleanupEnv;
- (void)copyResultSet;
- (void)updateScoreWithIndex:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
