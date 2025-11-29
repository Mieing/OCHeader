@class NSString;

@interface ConfAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ilinkAppid;
@property (nonatomic) unsigned int imMode;
@property (nonatomic) unsigned int confMode;
@property (nonatomic) unsigned int audioFlag;
@property (nonatomic) unsigned int defVideoLength;
@property (nonatomic) unsigned int videoConfig;
@property (nonatomic) unsigned int videoRatio;
@property (nonatomic) unsigned int brokenMode;
@property (nonatomic) unsigned int oneUpload;
@property (nonatomic) unsigned int cloudProxy;
@property (nonatomic) BOOL subCall;
@property (nonatomic) BOOL subCallCross;
@property (nonatomic) BOOL callEndNew;
@property (nonatomic) unsigned int fixedVideoLength;
@property (nonatomic) unsigned int maxDecodeFps;
@property (nonatomic) BOOL doubleLink;

+ (void)initialize;

- (void)setDoubleLink:(BOOL)a0;
- (BOOL)doubleLink;
- (void)setMaxDecodeFps:(unsigned int)a0;
- (unsigned int)maxDecodeFps;
- (void)setFixedVideoLength:(unsigned int)a0;
- (unsigned int)fixedVideoLength;
- (void)setCallEndNew:(BOOL)a0;
- (BOOL)callEndNew;
- (void)setSubCallCross:(BOOL)a0;
- (BOOL)subCallCross;
- (void)setSubCall:(BOOL)a0;
- (BOOL)subCall;
- (void)setCloudProxy:(unsigned int)a0;
- (unsigned int)cloudProxy;
- (void)setOneUpload:(unsigned int)a0;
- (unsigned int)oneUpload;
- (void)setBrokenMode:(unsigned int)a0;
- (unsigned int)brokenMode;
- (void)setVideoRatio:(unsigned int)a0;
- (unsigned int)videoRatio;
- (void)setVideoConfig:(unsigned int)a0;
- (unsigned int)videoConfig;
- (void)setDefVideoLength:(unsigned int)a0;
- (unsigned int)defVideoLength;
- (void)setAudioFlag:(unsigned int)a0;
- (unsigned int)audioFlag;
- (void)setConfMode:(unsigned int)a0;
- (unsigned int)confMode;
- (void)setImMode:(unsigned int)a0;
- (unsigned int)imMode;
- (void)setIlinkAppid:(id)a0;
- (id)ilinkAppid;

@end
