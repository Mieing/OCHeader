@class FinderReddotFreqConfig_ExemptStrategy, FinderReddotFreqConfig_BizXStrategy, NSMutableArray, FinderReddotFreqConfig_XStrategy;

@interface FinderReddotFreqConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *controlItems;
@property (nonatomic) unsigned int stayEntryMinDuration;
@property (nonatomic) unsigned int simulExposeMaxCountLimit;
@property (retain, nonatomic) FinderReddotFreqConfig_XStrategy *xStrategy;
@property (retain, nonatomic) NSMutableArray *bizControlItems;
@property (retain, nonatomic) FinderReddotFreqConfig_ExemptStrategy *exemptStrategy;
@property (retain, nonatomic) FinderReddotFreqConfig_BizXStrategy *bizXStrategy;

+ (void)initialize;

- (void)setBizXStrategy:(id)a0;
- (id)bizXStrategy;
- (void)setExemptStrategy:(id)a0;
- (id)exemptStrategy;
- (void)setBizControlItems:(id)a0;
- (id)bizControlItems;
- (void)setXStrategy:(id)a0;
- (id)xStrategy;
- (void)setSimulExposeMaxCountLimit:(unsigned int)a0;
- (unsigned int)simulExposeMaxCountLimit;
- (void)setStayEntryMinDuration:(unsigned int)a0;
- (unsigned int)stayEntryMinDuration;
- (void)setControlItems:(id)a0;
- (id)controlItems;

@end
