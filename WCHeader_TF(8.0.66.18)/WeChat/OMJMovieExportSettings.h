@class NSString, NSDictionary;

@interface OMJMovieExportSettings : NSObject

@property (readonly, nonatomic) unsigned long long mediaContainerType;
@property (readonly, nonatomic) unsigned long long videoFrameRate;
@property (readonly, nonatomic) unsigned long long videoDimensionLevel;
@property (readonly, nonatomic) unsigned long long videoCodecType;
@property (readonly, nonatomic) unsigned long long audioCodecType;
@property (readonly, nonatomic) int videoBitsPerFrame;
@property (readonly, nonatomic) int audioAverageBitRate;
@property (readonly, nonatomic) int videoMaxKeyframeInterval;
@property (retain, nonatomic) NSString *copyrightMetadata;
@property (retain, nonatomic) NSDictionary *exportMetadata;
@property (nonatomic) BOOL isUseExportMetadataTags;
@property (readonly, nonatomic) BOOL enableHDR;
@property (nonatomic) BOOL isCoverImageDetectionEnabled;
@property (nonatomic) int coverImageDetectionFrameInterval;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } coverImageDetectionMaxDuration;
@property (nonatomic) float coverImageDetectionDarknessRatioThreshold;
@property (nonatomic) float coverImageClarityThreshold;
@property (nonatomic) unsigned long long checksumType;

+ (id)wcmj_exportSettingsFromEncodeParams:(id)a0 enableHDR:(BOOL)a1;
+ (unsigned long long)wcmj_videoFrameRateFromEncodeParams:(id)a0;
+ (unsigned long long)wcmj_videoDimensionLevelFromEncodeParams:(id)a0;
+ (int)wcmj_videoBitsPerFrameFromEncodeParams:(id)a0;
+ (int)wcmj_audioAverageBitRateFromEncodeParams:(id)a0;
+ (int)wcmj_videoMaxKeyframeIntervalFromEncodeParams:(id)a0;
+ (id)default1080pSettings;
+ (id)default720pSettings;

- (id)initWithContainerType:(unsigned long long)a0 videoFrameRate:(unsigned long long)a1 videoDimensionLevel:(unsigned long long)a2 videoCodecType:(unsigned long long)a3 audioCodecType:(unsigned long long)a4 videoBitsPerFrame:(int)a5 audioAverageBitRate:(int)a6 videoMaxKeyframeInterval:(int)a7 enableHDR:(BOOL)a8;
- (id)initWithContainerType:(unsigned long long)a0 videoFrameRate:(unsigned long long)a1 videoDimensionLevel:(unsigned long long)a2 videoCodecType:(unsigned long long)a3 audioCodecType:(unsigned long long)a4 videoBitsPerFrame:(int)a5 audioAverageBitRate:(int)a6 videoMaxKeyframeInterval:(int)a7 copyrightMetadata:(id)a8 enableHDR:(BOOL)a9;
- (id)initWithContainerType:(unsigned long long)a0 videoFrameRate:(unsigned long long)a1 videoDimensionLevel:(unsigned long long)a2 videoCodecType:(unsigned long long)a3 audioCodecType:(unsigned long long)a4 videoBitsPerFrame:(int)a5 audioAverageBitRate:(int)a6 videoMaxKeyframeInterval:(int)a7 copyrightMetadata:(id)a8 exportMetadata:(id)a9 isUseExportMetadataTags:(BOOL)a10 enableHDR:(BOOL)a11;
- (struct XMJMovieExportSettings { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x8; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x9; BOOL x10; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; } x11; BOOL x12; struct XMSCoverImageDetectOptions { BOOL x0; int x1; struct XTMTime { long long x0; unsigned int x1; } x2; float x3; float x4; } x13; int x14; })createBackingExportSettings;
- (id)description;
- (void).cxx_destruct;

@end
