@class NSString;

@interface IESLiveLinkRTCInteractMixStreamParams : NSObject

@property (nonatomic) long long mixVideoWidth;
@property (nonatomic) long long mixVideoHeight;
@property (nonatomic) long long mixVideoFps;
@property (nonatomic) long long mixVideoCodec;
@property (copy, nonatomic) NSString *mixVideoProfile;
@property (nonatomic) long long mixVideoGop;
@property (nonatomic) long long mixVideoBitrate;
@property (nonatomic) long long mixAudioSampleRate;
@property (nonatomic) long long mixAudioChannel;
@property (nonatomic) long long mixAudioBitrate;
@property (nonatomic) long long mixAudioCodec;
@property (nonatomic) BOOL enableBFrame;
@property (nonatomic) BOOL useOriginalFrame;
@property (copy, nonatomic) NSString *publishUrl;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *rtcAppId;
@property (nonatomic) BOOL byteAudioModeEnable;
@property (nonatomic) long long mixType;

- (void).cxx_destruct;

@end
