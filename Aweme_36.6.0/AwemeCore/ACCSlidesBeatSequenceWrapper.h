@class ACCSlidesBeatSequenceGenerator;

@interface ACCSlidesBeatSequenceWrapper : NSObject

@property (retain, nonatomic) ACCSlidesBeatSequenceGenerator *generator;

- (double)genertateBeatWithTime:(double)a0 mediaDuration:(double)a1 mediaType:(unsigned long long)a2;
- (double)matchBeatWithTime:(double)a0 mediaDuration:(double)a1 elasticDuration:(double)a2 mediaType:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)initWithGenerator:(id)a0;

@end
