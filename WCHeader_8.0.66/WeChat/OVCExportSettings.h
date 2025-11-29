@interface OVCExportSettings : NSObject

@property (readonly, nonatomic) unsigned long long mediaContainerType;
@property (readonly, nonatomic) unsigned long long videoFrameRate;
@property (readonly, nonatomic) unsigned long long videoDimensionLevel;
@property (readonly, nonatomic) unsigned long long videoCodecType;
@property (readonly, nonatomic) unsigned long long audioCodecType;
@property (readonly, nonatomic) int videoBitsPerFrame;
@property (readonly, nonatomic) int averageAudioBitRate;
@property (readonly, nonatomic) BOOL enableHDR;

- (id)initWithContainerType:(unsigned long long)a0 videoFrameRate:(unsigned long long)a1 videoDimensionLevel:(unsigned long long)a2 videoCodecType:(unsigned long long)a3 audioCodecType:(unsigned long long)a4 videoBitsPerFrame:(int)a5 averageAudioBitRate:(int)a6;
- (id)initWithContainerType:(unsigned long long)a0 videoFrameRate:(unsigned long long)a1 videoDimensionLevel:(unsigned long long)a2 videoCodecType:(unsigned long long)a3 audioCodecType:(unsigned long long)a4 videoBitsPerFrame:(int)a5 averageAudioBitRate:(int)a6 enableHDR:(BOOL)a7;
- (struct SharedPtr<XMSExportSettings> { struct XMSExportSettings *x0; })createBackingExportSettings;

@end
