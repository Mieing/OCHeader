@interface FinderExitCacheInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int cacheDuration;
@property (nonatomic) unsigned int progressMinThreshold;
@property (nonatomic) unsigned int progressMaxThreshold;

+ (void)initialize;

- (void)setProgressMaxThreshold:(unsigned int)a0;
- (unsigned int)progressMaxThreshold;
- (void)setProgressMinThreshold:(unsigned int)a0;
- (unsigned int)progressMinThreshold;
- (void)setCacheDuration:(unsigned int)a0;
- (unsigned int)cacheDuration;

@end
