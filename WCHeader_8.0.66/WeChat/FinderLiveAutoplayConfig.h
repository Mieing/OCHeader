@interface FinderLiveAutoplayConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int autoPlayEnabled;
@property (nonatomic) unsigned int flowListAutoPlayEnabled;
@property (nonatomic) unsigned int oftenReadHorizontalScrollAutoPlayEnabled;

+ (void)initialize;

- (void)setOftenReadHorizontalScrollAutoPlayEnabled:(unsigned int)a0;
- (unsigned int)oftenReadHorizontalScrollAutoPlayEnabled;
- (void)setFlowListAutoPlayEnabled:(unsigned int)a0;
- (unsigned int)flowListAutoPlayEnabled;
- (void)setAutoPlayEnabled:(unsigned int)a0;
- (unsigned int)autoPlayEnabled;

@end
