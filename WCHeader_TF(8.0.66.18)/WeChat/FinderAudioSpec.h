@class NSString;

@interface FinderAudioSpec : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileFormat;
@property (nonatomic) unsigned int audioBitrate;
@property (retain, nonatomic) NSString *specUrl;

+ (void)initialize;

- (void)setSpecUrl:(id)a0;
- (id)specUrl;
- (void)setAudioBitrate:(unsigned int)a0;
- (unsigned int)audioBitrate;
- (void)setFileFormat:(id)a0;
- (id)fileFormat;

@end
