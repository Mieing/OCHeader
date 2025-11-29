@class NSString;

@interface FinderHlsMediaSpec : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileFormat;
@property (nonatomic) unsigned int firstLoadBytes;
@property (nonatomic) unsigned int bitRate;
@property (retain, nonatomic) NSString *codingFormat;
@property (nonatomic) unsigned int dynamicRangeType;
@property (nonatomic) float vfps;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) unsigned int usePcdn;
@property (nonatomic) unsigned int qualityScore;
@property (nonatomic) unsigned int videoBitrate;
@property (nonatomic) unsigned int audioBitrate;
@property (nonatomic) unsigned int selectSuggest;
@property (nonatomic) unsigned int levelOrder;
@property (retain, nonatomic) NSString *bypass;
@property (nonatomic) unsigned int is3Az;
@property (nonatomic) unsigned int meanVol;
@property (nonatomic) unsigned int meanVol3Sec;
@property (retain, nonatomic) NSString *enhance;

+ (void)initialize;

- (void)setEnhance:(id)a0;
- (id)enhance;
- (void)setMeanVol3Sec:(unsigned int)a0;
- (unsigned int)meanVol3Sec;
- (void)setMeanVol:(unsigned int)a0;
- (unsigned int)meanVol;
- (void)setIs3Az:(unsigned int)a0;
- (unsigned int)is3Az;
- (void)setBypass:(id)a0;
- (id)bypass;
- (void)setLevelOrder:(unsigned int)a0;
- (unsigned int)levelOrder;
- (void)setSelectSuggest:(unsigned int)a0;
- (unsigned int)selectSuggest;
- (void)setAudioBitrate:(unsigned int)a0;
- (unsigned int)audioBitrate;
- (void)setVideoBitrate:(unsigned int)a0;
- (unsigned int)videoBitrate;
- (void)setQualityScore:(unsigned int)a0;
- (unsigned int)qualityScore;
- (void)setUsePcdn:(unsigned int)a0;
- (unsigned int)usePcdn;
- (void)setDurationMs:(unsigned int)a0;
- (unsigned int)durationMs;
- (void)setHeight:(unsigned int)a0;
- (unsigned int)height;
- (void)setWidth:(unsigned int)a0;
- (unsigned int)width;
- (void)setVfps:(float)a0;
- (float)vfps;
- (void)setDynamicRangeType:(unsigned int)a0;
- (unsigned int)dynamicRangeType;
- (void)setCodingFormat:(id)a0;
- (id)codingFormat;
- (void)setBitRate:(unsigned int)a0;
- (unsigned int)bitRate;
- (void)setFirstLoadBytes:(unsigned int)a0;
- (unsigned int)firstLoadBytes;
- (void)setFileFormat:(id)a0;
- (id)fileFormat;

@end
