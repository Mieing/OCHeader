@class NSString, UIImage;

@interface V2TXLivePusherJSConfig : NSObject

@property (copy, nonatomic) NSString *pushUrl;
@property (nonatomic) BOOL isDebug;
@property (nonatomic) BOOL autoPush;
@property (nonatomic) long long pushMode;
@property (nonatomic) long long minVideoBitrate;
@property (nonatomic) long long maxVideoBitrate;
@property (nonatomic) long long beautyStyle;
@property (nonatomic) float beautyFilterDepth;
@property (nonatomic) float whiteningFilterDepth;
@property (nonatomic) long long homeOrientation;
@property (nonatomic) long long videoAspect;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (nonatomic) BOOL touchFocus;
@property (nonatomic) BOOL enableZoom;
@property (nonatomic) BOOL frontCamera;
@property (nonatomic) long long audioSamplerate;
@property (nonatomic) long long audioChannels;
@property (nonatomic) BOOL enableAGC;
@property (nonatomic) BOOL enableNAS;
@property (nonatomic) BOOL enableAudioPreview;
@property (nonatomic) long long volumeType;
@property (nonatomic) long long audioReverbType;
@property (nonatomic) long long voiceChangerType;
@property (nonatomic) BOOL enableMirror;
@property (nonatomic) long long localVideoMirrorType;
@property (nonatomic) BOOL enableCamera;
@property (nonatomic) BOOL enableCustomEffect;
@property (nonatomic) BOOL enableMic;
@property (nonatomic) BOOL muteAudio;
@property (nonatomic) BOOL needVolumeNotify;
@property (readonly, nonatomic) BOOL isRTC;
@property (readonly, nonatomic) unsigned long long liveMode;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) BOOL enableVideoCustomRender;
@property (nonatomic) long long fps;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)getDiffLog:(id)a0;
- (void).cxx_destruct;

@end
