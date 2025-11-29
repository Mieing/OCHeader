@class NSTimer, NSArray;
@protocol AWESearchVoiceMessagingMetersGeneratorDelegate;

@interface AWESearchVoiceMessagingMetersGenerator : NSObject

@property (retain, nonatomic) NSTimer *meterTimer;
@property (retain, nonatomic) NSArray *groups;
@property (nonatomic) long long peakIndex;
@property (nonatomic) double targetValue;
@property (nonatomic) long long frameCount;
@property (nonatomic) double maxSample;
@property (nonatomic) long long frecnt;
@property (weak, nonatomic) id<AWESearchVoiceMessagingMetersGeneratorDelegate> delegate;

- (void)startVoiceWave;
- (void)cancelVoiceWave;
- (void)voiceTimerHandler;
- (long long)generateRandomBase:(long long)a0 exclude:(id)a1;
- (void)updateGroupTarget:(long long)a0;
- (double)generateRandomFrom:(double)a0 to:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)updateValue;
- (void)updateTarget:(double)a0;

@end
