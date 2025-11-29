@interface ValidExposeConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int validExposeAreaRatio;
@property (nonatomic) unsigned int validExposeTimeMs;
@property (nonatomic) unsigned int extraCalcExposeTimeMs;
@property (nonatomic) unsigned int newValidExposeTimeMs;

+ (void)initialize;

- (void)setNewValidExposeTimeMs:(unsigned int)a0;
- (unsigned int)newValidExposeTimeMs;
- (void)setExtraCalcExposeTimeMs:(unsigned int)a0;
- (unsigned int)extraCalcExposeTimeMs;
- (void)setValidExposeTimeMs:(unsigned int)a0;
- (unsigned int)validExposeTimeMs;
- (void)setValidExposeAreaRatio:(unsigned int)a0;
- (unsigned int)validExposeAreaRatio;

@end
