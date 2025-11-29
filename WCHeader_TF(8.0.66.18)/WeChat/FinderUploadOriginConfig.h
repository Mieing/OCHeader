@interface FinderUploadOriginConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long minFilesize;
@property (nonatomic) unsigned long long maxFilesize;
@property (nonatomic) unsigned long long minDurationMs;
@property (nonatomic) unsigned long long maxDurationMs;
@property (nonatomic) unsigned long long minBitrateKbps;
@property (nonatomic) unsigned long long maxBitrateKbps;

+ (void)initialize;

- (void)setMaxBitrateKbps:(unsigned long long)a0;
- (unsigned long long)maxBitrateKbps;
- (void)setMinBitrateKbps:(unsigned long long)a0;
- (unsigned long long)minBitrateKbps;
- (void)setMaxDurationMs:(unsigned long long)a0;
- (unsigned long long)maxDurationMs;
- (void)setMinDurationMs:(unsigned long long)a0;
- (unsigned long long)minDurationMs;
- (void)setMaxFilesize:(unsigned long long)a0;
- (unsigned long long)maxFilesize;
- (void)setMinFilesize:(unsigned long long)a0;
- (unsigned long long)minFilesize;
- (void)setEnable:(BOOL)a0;
- (BOOL)enable;

@end
