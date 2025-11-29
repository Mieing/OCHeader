@class NSString, NSArray, NSDictionary, UIImage;
@protocol IESLiveRoomService;

@interface IESLiveNormalStreamConfig : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) unsigned long long streamContentType;
@property (copy, nonatomic) NSString *rtmpURL;
@property (copy, nonatomic) NSArray *URLs;
@property (copy, nonatomic) NSDictionary *sdkParams;
@property (copy, nonatomic) NSString *projectKey;
@property (nonatomic) long long streamMode;
@property (nonatomic) unsigned long long audioSource;
@property (copy, nonatomic) NSString *capturePreset;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) BOOL enablePanorama;
@property (nonatomic) unsigned long long bitrate;
@property (nonatomic) unsigned long long maxBitrate;
@property (nonatomic) unsigned long long minBitrate;
@property (nonatomic) unsigned long long audioBitrate;
@property (nonatomic) unsigned long long videoFPS;
@property (nonatomic) long long gopSec;
@property (nonatomic) BOOL enableBFrame;
@property (nonatomic) BOOL enableNTP;
@property (nonatomic) long long bitrateAdaptStrategy;
@property (nonatomic) BOOL enableOpenGOP;
@property (nonatomic) unsigned long long audioChannelCount;
@property (nonatomic) unsigned long long audioSampleRate;
@property (nonatomic) BOOL enableInEarMonitoring;
@property (nonatomic) BOOL enableBlueToothEarMonitoring;
@property (nonatomic) long long streamLogTimeInterval;
@property (nonatomic) BOOL allowsRealTimeVoicePowerLevel;
@property (nonatomic) long long aCodec;
@property (nonatomic) unsigned long long vCodec;
@property (nonatomic) long long profileLevel;
@property (nonatomic) BOOL enableBackgroundMode;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) BOOL useCustomizedSEI;
@property (nonatomic) long long dtsAdjustParam;
@property (copy, nonatomic) NSString *authorizationString;
@property (nonatomic) long long ntpDiffTime;
@property (copy, nonatomic) NSString *metaDataString;

- (void).cxx_destruct;

@end
