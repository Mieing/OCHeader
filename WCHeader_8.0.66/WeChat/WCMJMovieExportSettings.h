@class NSString;

@interface WCMJMovieExportSettings : NSObject <NSCoding>

@property (nonatomic) unsigned long long mediaContainerType;
@property (nonatomic) unsigned long long videoFrameRate;
@property (nonatomic) unsigned long long videoDimensionLevel;
@property (nonatomic) unsigned long long videoCodecType;
@property (nonatomic) unsigned long long audioCodecType;
@property (nonatomic) int videoBitsPerFrame;
@property (nonatomic) int audioAverageBitRate;
@property (nonatomic) int videoMaxKeyframeInterval;
@property (copy, nonatomic) NSString *copyrightMetadata;
@property (nonatomic) BOOL enableHDR;
@property (nonatomic) BOOL isCoverImageDetectionEnabled;
@property (nonatomic) int coverImageDetectionFrameInterval;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } coverImageDetectionMaxDuration;
@property (nonatomic) float coverImageDetectionDarknessRatioThreshold;

- (id)initWithOMJMovieExportSettings:(id)a0;
- (id)exportMJSettings;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
