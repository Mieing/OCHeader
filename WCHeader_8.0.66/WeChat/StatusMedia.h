@class NSString;

@interface StatusMedia : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mediaName;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) NSString *mediaUrl;
@property (retain, nonatomic) NSString *mediaAesKey;
@property (retain, nonatomic) NSString *mediaThumbUrl;
@property (retain, nonatomic) NSString *mediaThumbAesKey;
@property (nonatomic) unsigned long long mediaDurationMs;
@property (nonatomic) unsigned long long mediaHeight;
@property (nonatomic) unsigned long long mediaWidth;

+ (void)initialize;

- (void)setMediaWidth:(unsigned long long)a0;
- (unsigned long long)mediaWidth;
- (void)setMediaHeight:(unsigned long long)a0;
- (unsigned long long)mediaHeight;
- (void)setMediaDurationMs:(unsigned long long)a0;
- (unsigned long long)mediaDurationMs;
- (void)setMediaThumbAesKey:(id)a0;
- (id)mediaThumbAesKey;
- (void)setMediaThumbUrl:(id)a0;
- (id)mediaThumbUrl;
- (void)setMediaAesKey:(id)a0;
- (id)mediaAesKey;
- (void)setMediaUrl:(id)a0;
- (id)mediaUrl;
- (void)setMediaType:(unsigned int)a0;
- (unsigned int)mediaType;
- (void)setMediaName:(id)a0;
- (id)mediaName;

@end
