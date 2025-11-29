@class NSArray;

@interface AWESearchVoiceMessagingMetersGroup : NSObject

@property (nonatomic) long long peakIndex;
@property (nonatomic) double targetValue;
@property (nonatomic) long long frameCount;
@property (nonatomic) long long meterCount;
@property (retain, nonatomic) NSArray *meters;
@property (retain, nonatomic) NSArray *values;

- (long long)generateRandomBase:(long long)a0 exclude:(id)a1;
- (double)generateRandomFrom:(double)a0 to:(double)a1;
- (void)updateMeterTarget:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCount:(long long)a0;
- (void)updateValue;
- (void)updateTarget:(double)a0;

@end
