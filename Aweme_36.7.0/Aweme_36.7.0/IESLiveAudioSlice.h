@class IESLiveASRManager, NSMutableArray, NSDate;
@protocol IESLivePerfSampler;

@interface IESLiveAudioSlice : NSObject

@property (retain, nonatomic) NSMutableArray *audioDataArray;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) long long dataSize;
@property (nonatomic) long long dataCount;
@property (nonatomic) unsigned long long tagAB;
@property (nonatomic) long long sliceCount;
@property (nonatomic) long long beginAudioSliceTime;
@property (nonatomic) long long endAudioSliceTime;
@property (nonatomic) long long beginAudioSliceTimeDoing;
@property (nonatomic) long long endAudioSliceTimeDoing;
@property (nonatomic) BOOL isRuningModel;
@property (nonatomic) BOOL lastSlice;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (weak, nonatomic) IESLiveASRManager *delegate;

- (void)clearAudioSlice;
- (void)appendDataNew:(id)a0 timestampMS:(long long)a1;
- (void)beginIdentify;
- (void)modelRunning;
- (void)modelEnd;
- (void)monitorPerformance;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
