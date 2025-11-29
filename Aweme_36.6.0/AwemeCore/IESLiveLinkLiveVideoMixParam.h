@class NSString;

@interface IESLiveLinkLiveVideoMixParam : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long fps;
@property (nonatomic) long long bitrateKbps;
@property (nonatomic) long long mixVideoCodec;
@property (retain, nonatomic) NSString *mixVideoProfile;
@property (nonatomic) long long mixVideoGop;
@property (nonatomic) long long mixAudioSampleRate;
@property (nonatomic) long long mixAudioChannel;
@property (nonatomic) long long mixAudioBitrate;
@property (nonatomic) long long mixAudioCodec;
@property (nonatomic) BOOL enableBFrame;
@property (nonatomic) BOOL useOriginalFrame;
@property (nonatomic) BOOL useAudioMixer;
@property (nonatomic) long long mixSyncQueueLengthMs;
@property (copy, nonatomic) NSString *effectResourceLocalPath;
@property (nonatomic) long long msgId;
@property (nonatomic) long long arg1;
@property (nonatomic) long long arg2;
@property (copy, nonatomic) NSString *arg3;

- (id)mixAudioParamsStr;
- (id)mixVideoParamsStr;
- (void).cxx_destruct;
- (id)init;

@end
