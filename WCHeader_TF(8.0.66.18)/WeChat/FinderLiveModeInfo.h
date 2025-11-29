@interface FinderLiveModeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int liveMode;
@property (nonatomic) unsigned int liveSubMode;

+ (void)initialize;

- (void)setLiveSubMode:(unsigned int)a0;
- (unsigned int)liveSubMode;
- (void)setLiveMode:(unsigned int)a0;
- (unsigned int)liveMode;

@end
