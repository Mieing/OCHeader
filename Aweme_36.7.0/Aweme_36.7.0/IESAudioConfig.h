@interface IESAudioConfig : NSObject

@property (nonatomic) long long sampleRate;
@property (nonatomic) unsigned long long format;
@property (nonatomic) long long bitrate;
@property (nonatomic) BOOL useHEAAC;
@property (nonatomic) BOOL needCallback;
@property (nonatomic) long long channels;
@property (nonatomic) BOOL useFloat;
@property (nonatomic) BOOL useExtAudio;
@property (nonatomic) BOOL useWav;
@property (nonatomic) BOOL useUnitPrepare;
@property (nonatomic) unsigned long long mode;

- (id)description;
- (id)init;

@end
