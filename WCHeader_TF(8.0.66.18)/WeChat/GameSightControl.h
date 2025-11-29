@interface GameSightControl : WXPBGeneratedMessage

@property (nonatomic) unsigned long long bitrate;
@property (nonatomic) unsigned long long widthPixel;
@property (nonatomic) unsigned long long heightPixel;
@property (nonatomic) unsigned long long audioBitrate;
@property (nonatomic) unsigned long long maxDuration;

+ (void)initialize;

- (void)setMaxDuration:(unsigned long long)a0;
- (unsigned long long)maxDuration;
- (void)setAudioBitrate:(unsigned long long)a0;
- (unsigned long long)audioBitrate;
- (void)setHeightPixel:(unsigned long long)a0;
- (unsigned long long)heightPixel;
- (void)setWidthPixel:(unsigned long long)a0;
- (unsigned long long)widthPixel;
- (void)setBitrate:(unsigned long long)a0;
- (unsigned long long)bitrate;

@end
