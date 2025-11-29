@interface MegaVideoPreloadGlobalInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int prevCount;
@property (nonatomic) unsigned int nextCount;
@property (nonatomic) unsigned int maxBitRate;
@property (nonatomic) float preloadFileSizePercent;
@property (nonatomic) unsigned int preloadFileMinBytes;
@property (nonatomic) unsigned int preloadMaxConcurrentCount;
@property (nonatomic) unsigned int preConcurrentCount;
@property (nonatomic) unsigned int playConcurrentCount;
@property (nonatomic) float startPreloadPercent;
@property (nonatomic) unsigned int startPreloadSecs;

+ (void)initialize;

@end
