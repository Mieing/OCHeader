@class NSString;

@interface FinderSvrExptConfig : WXPBGeneratedMessage

@property (nonatomic) int hit;
@property (retain, nonatomic) NSString *config;
@property (nonatomic) unsigned int exptId;

+ (void)initialize;

- (void)setExptId:(unsigned int)a0;
- (unsigned int)exptId;
- (void)setConfig:(id)a0;
- (id)config;
- (void)setHit:(int)a0;
- (int)hit;

@end
