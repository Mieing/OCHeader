@class NSString;

@interface StatusMediaInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *mediaUrl;
@property (retain, nonatomic) NSString *thumbAesKey;
@property (retain, nonatomic) NSString *mediaAesKey;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) unsigned long long durationMs;

+ (void)initialize;

- (void)setDurationMs:(unsigned long long)a0;
- (unsigned long long)durationMs;
- (void)setHeight:(int)a0;
- (int)height;
- (void)setWidth:(int)a0;
- (int)width;
- (void)setMediaAesKey:(id)a0;
- (id)mediaAesKey;
- (void)setThumbAesKey:(id)a0;
- (id)thumbAesKey;
- (void)setMediaUrl:(id)a0;
- (id)mediaUrl;
- (void)setThumbUrl:(id)a0;
- (id)thumbUrl;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
