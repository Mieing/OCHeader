@interface TRTCAudioFrameDelegateFormat : NSObject

@property (nonatomic) long long sampleRate;
@property (nonatomic) int channels;
@property (nonatomic) int samplesPerCall;
@property (nonatomic) long long mode;

@end
