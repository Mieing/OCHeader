@class FinderNativeDramaPreloadConfig, FinderNativeDramaInfo;

@interface FinderObjectNativeDramaInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderNativeDramaInfo *nativeDramaInfo;
@property (nonatomic) unsigned int isUnlocked;
@property (nonatomic) unsigned int positionNum;
@property (nonatomic) unsigned int isFreeEpisode;
@property (retain, nonatomic) FinderNativeDramaPreloadConfig *preloadConfig;

+ (void)initialize;

- (void)setPreloadConfig:(id)a0;
- (id)preloadConfig;
- (void)setIsFreeEpisode:(unsigned int)a0;
- (unsigned int)isFreeEpisode;
- (void)setPositionNum:(unsigned int)a0;
- (unsigned int)positionNum;
- (void)setIsUnlocked:(unsigned int)a0;
- (unsigned int)isUnlocked;
- (void)setNativeDramaInfo:(id)a0;
- (id)nativeDramaInfo;

@end
