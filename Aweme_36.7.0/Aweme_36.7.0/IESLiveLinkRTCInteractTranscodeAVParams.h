@class NSString;

@interface IESLiveLinkRTCInteractTranscodeAVParams : NSObject

@property (nonatomic) long long mixVideoWidth;
@property (nonatomic) long long mixVideoHeight;
@property (nonatomic) long long mixVideoFps;
@property (readonly, nonatomic) long long mixVideoCodec;
@property (readonly, nonatomic) NSString *mixVideoProfile;
@property (readonly, nonatomic) long long mixVideoGop;
@property (nonatomic) long long mixVideoBitrate;
@property (readonly, nonatomic) long long mixAudioSampleRate;
@property (readonly, nonatomic) long long mixAudioChannel;
@property (readonly, nonatomic) long long mixAudioBitrate;
@property (readonly, nonatomic) long long mixAudioCodec;
@property (nonatomic) BOOL enableBFrame;
@property (nonatomic) BOOL useOriginalFrame;
@property (nonatomic) BOOL useAudioMixer;
@property (readonly, nonatomic) long long mixSyncQueueLengthMs;
@property (copy, nonatomic) NSString *effectResourceLocalPath;
@property (nonatomic) long long msgId;
@property (nonatomic) long long arg1;
@property (nonatomic) long long arg2;
@property (copy, nonatomic) NSString *arg3;

- (id)mixAudioParamsJson;
- (id)mixVideoParamsJson;
- (id)dictToJsonstr:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
