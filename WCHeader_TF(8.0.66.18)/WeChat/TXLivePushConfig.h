@class UIImage, NSDictionary;

@interface TXLivePushConfig : NSObject

@property (nonatomic) int homeOrientation;
@property (nonatomic) BOOL touchFocus;
@property (nonatomic) BOOL enableZoom;
@property (retain, nonatomic) UIImage *watermark;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } watermarkNormalization;
@property (nonatomic) int localVideoMirrorType;
@property (nonatomic) int pauseFps;
@property (retain, nonatomic) UIImage *pauseImg;
@property (nonatomic) int videoResolution;
@property (nonatomic) int videoFPS;
@property (nonatomic) int videoEncodeGop;
@property (nonatomic) int videoBitratePIN;
@property (nonatomic) BOOL enableAutoBitrate;
@property (nonatomic) int autoAdjustStrategy;
@property (nonatomic) int videoBitrateMax;
@property (nonatomic) int videoBitrateMin;
@property (nonatomic) int audioSampleRate;
@property (nonatomic) int audioChannels;
@property (nonatomic) BOOL enableAudioPreview;
@property (nonatomic) BOOL enablePureAudioPush;
@property (nonatomic) int connectRetryCount;
@property (nonatomic) int connectRetryInterval;
@property (nonatomic) int customModeType;
@property (nonatomic) BOOL enableNAS;
@property (nonatomic) BOOL enableHWAcceleration;
@property (nonatomic) long long volumeType;
@property (nonatomic) BOOL enableMute;
@property (nonatomic) BOOL frontCamera;
@property (nonatomic) int rtmpChannelType;
@property (copy, nonatomic) NSDictionary *metaData;
@property (nonatomic) float beautyFilterDepth;
@property (nonatomic) float whiteningFilterDepth;
@property (nonatomic) BOOL enableNearestIP;
@property (nonatomic) struct CGPoint { double x; double y; } watermarkPos;
@property (nonatomic) int pauseTime;
@property struct CGSize { double width; double height; } sampleBufferSize;
@property BOOL autoSampleBufferSize;
@property (nonatomic) BOOL enableAEC;
@property (nonatomic) BOOL enableAGC;
@property (nonatomic) BOOL enableAudioAcceleration;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
