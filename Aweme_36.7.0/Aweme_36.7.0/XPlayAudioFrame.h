@class NSData, NSString;

@interface XPlayAudioFrame : NSObject <XPlayRTCAudioFrame>

@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) int samples;
@property (nonatomic) int sampleRate;
@property (nonatomic) long long channel;
@property (nonatomic) int size;
@property (nonatomic) long long ptsMs;
@property (nonatomic) long long bitsPerSample;
@property (retain, nonatomic) NSData *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
