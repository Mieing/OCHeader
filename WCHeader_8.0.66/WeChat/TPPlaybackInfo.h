@class NSString, TPDynamicStatisticParams, TPGeneralPlayFlowParams;

@interface TPPlaybackInfo : NSObject

@property (copy, nonatomic) NSString *containerFormat;
@property (copy, nonatomic) NSString *videoMIMEType;
@property (nonatomic) long long videoBitRate;
@property (nonatomic) long long videoProfile;
@property (nonatomic) long long videoLevel;
@property (nonatomic) long long videoRotation;
@property (nonatomic) long long videoFrameRate;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (nonatomic) long long videoCodecId;
@property (nonatomic) long long videoColorSpace;
@property (copy, nonatomic) NSString *audioMIMEType;
@property (nonatomic) long long audioBitRate;
@property (nonatomic) long long audioProfile;
@property (nonatomic) long long audioLevel;
@property (nonatomic) long long audioChannelLayout;
@property (copy, nonatomic) NSString *subtitleMIMEType;
@property (nonatomic) long long currentPositionMs;
@property (nonatomic) long long durationMs;
@property (nonatomic) long long playableDurationMs;
@property (nonatomic) double bufferPercent;
@property (nonatomic) long long demuxerOffset;
@property (retain, nonatomic) TPDynamicStatisticParams *dynamicStatisticParams;
@property (retain, nonatomic) TPGeneralPlayFlowParams *generalPlayFlowParams;

+ (id)buildFromPlayerProperty:(id)a0;
+ (id)buildFromString:(id)a0;
+ (id)buildFromVideoInfo:(id)a0;
+ (id)MIMETypeForCodecID:(int)a0;

- (void)updateVideoWidth:(long long)a0 height:(long long)a1;
- (id)resolution;
- (void).cxx_destruct;

@end
