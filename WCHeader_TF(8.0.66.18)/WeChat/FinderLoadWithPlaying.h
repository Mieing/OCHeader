@interface FinderLoadWithPlaying : WXPBGeneratedMessage

@property (nonatomic) unsigned int playSecond;
@property (nonatomic) unsigned int loadSecond;

+ (void)initialize;

- (void)setLoadSecond:(unsigned int)a0;
- (unsigned int)loadSecond;
- (void)setPlaySecond:(unsigned int)a0;
- (unsigned int)playSecond;

@end
