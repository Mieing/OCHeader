@class NSArray, ACCSlidesBeatSequenceGeneratorConfig;

@interface ACCSlidesBeatSequenceGenerator : NSObject

@property (retain, nonatomic) ACCSlidesBeatSequenceGeneratorConfig *config;
@property (copy, nonatomic) NSArray *beatsArray;

- (double)p_genertateBeatWithTime:(double)a0 minInterval:(double)a1 maxInterval:(double)a2 mediaType:(unsigned long long)a3;
- (double)genertateBeatWithTime:(double)a0 mediaDuration:(double)a1 mediaType:(unsigned long long)a2;
- (double)matchBeatWithTime:(double)a0 mediaDuration:(double)a1 elasticDuration:(double)a2 mediaType:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
