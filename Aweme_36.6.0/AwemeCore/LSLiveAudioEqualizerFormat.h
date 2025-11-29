@interface LSLiveAudioEqualizerFormat : NSObject <NSCopying>

@property (nonatomic) double preamp;
@property (nonatomic) double amp31;
@property (nonatomic) double amp63;
@property (nonatomic) double amp125;
@property (nonatomic) double amp250;
@property (nonatomic) double amp500;
@property (nonatomic) double amp1000;
@property (nonatomic) double amp2000;
@property (nonatomic) double amp4000;
@property (nonatomic) double amp8000;
@property (nonatomic) double amp16000;
@property (nonatomic) double freqWidth31;
@property (nonatomic) double freqWidth63;
@property (nonatomic) double freqWidth125;
@property (nonatomic) double freqWidth250;
@property (nonatomic) double freqWidth500;
@property (nonatomic) double freqWidth1000;
@property (nonatomic) double freqWidth2000;
@property (nonatomic) double freqWidth4000;
@property (nonatomic) double freqWidth8000;
@property (nonatomic) double freqWidth16000;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
