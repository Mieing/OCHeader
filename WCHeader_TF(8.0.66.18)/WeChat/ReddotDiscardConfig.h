@class NSMutableArray;

@interface ReddotDiscardConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *path;
@property (nonatomic) unsigned int findersyncUserScene;
@property (nonatomic) unsigned int accumulateExposeInterval;
@property (nonatomic) unsigned int lastExposeInterval;

+ (void)initialize;

- (void)setLastExposeInterval:(unsigned int)a0;
- (unsigned int)lastExposeInterval;
- (void)setAccumulateExposeInterval:(unsigned int)a0;
- (unsigned int)accumulateExposeInterval;
- (void)setFindersyncUserScene:(unsigned int)a0;
- (unsigned int)findersyncUserScene;
- (void)setPath:(id)a0;
- (id)path;

@end
