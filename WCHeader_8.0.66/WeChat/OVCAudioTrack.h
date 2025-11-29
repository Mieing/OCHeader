@class NSString;

@interface OVCAudioTrack : NSObject

@property (readonly, nonatomic) struct SharedPtr<XMFAudioTrack> { struct XMFAudioTrack *_ptr; } backingAudioTrack;
@property (readonly, nonatomic) NSString *codecIDName;
@property (readonly, nonatomic) NSString *codecProfileName;
@property (readonly, nonatomic) float sampleRate;
@property (readonly, nonatomic) NSString *sampleFormatName;
@property (readonly, nonatomic) NSString *channelLayoutName;
@property (readonly, nonatomic) long long channelCount;
@property (readonly, nonatomic) long long sampleUnitsPerFrame;
@property (readonly, nonatomic) long long averageBitrate;

- (id)initWithBackingAudioTrack:(const void *)a0;
- (id)initWithFilePath:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
