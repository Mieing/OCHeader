@class NSDictionary;

@interface OMJRecordingSettings : NSObject

@property (readonly, nonatomic) unsigned long long mediaContainerType;
@property (readonly, nonatomic) unsigned long long videoCodecType;
@property (readonly, nonatomic) unsigned long long audioCodecType;
@property (readonly, nonatomic) unsigned long long videoDimensionLevel;
@property (readonly, nonatomic) int videoBitsPerFrame;
@property (readonly, nonatomic) int audioAverageBitRate;
@property (readonly, nonatomic) int videoMaxKeyframeInterval;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxRecordingDuration;
@property (retain, nonatomic) NSDictionary *metaData;
@property (nonatomic) BOOL useMetadataTags;
@property (nonatomic) long long camOSTMode;
@property (nonatomic) BOOL outputMixedWithBGM;
@property (nonatomic) int videoClockwiseRotation;
@property (nonatomic) BOOL shouldGenerateCoverImage;
@property (nonatomic) BOOL shouldDisableExportingAtPreviewing;
@property (nonatomic) BOOL shouldExportPhoto;
@property (nonatomic) unsigned long long checksumType;

+ (id)default1080pSettings;
+ (id)default720pSettings;

- (id)initWithContainerType:(unsigned long long)a0 videoCodecType:(unsigned long long)a1 audioCodecType:(unsigned long long)a2 videoDimensionLevel:(unsigned long long)a3 videoBitsPerFrame:(int)a4 audioAverageBitRate:(int)a5 videoMaxKeyframeInterval:(int)a6;
- (struct XMJRecordingSettings { int x0; int x1; int x2; int x3; int x4; int x5; int x6; struct XMJTime { struct XMJFlicks { long long x0; } x0; int x1; } x7; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; } x8; BOOL x9; int x10; BOOL x11; int x12; BOOL x13; int x14; BOOL x15; BOOL x16; })createBackingRecordingSettings;
- (void).cxx_destruct;

@end
