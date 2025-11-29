@interface IESMMAudioOnsetResult : NSObject {
    float *onset_time;
    float *onset_intensity;
}

@property (nonatomic) int onset_len;

- (void)setTime:(float *)a0;
- (float *)time;
- (float *)intensity;
- (void)dealloc;
- (void)setIntensity:(float *)a0;

@end
