@interface ValidExposeConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int validExposeAreaRatio;
@property (nonatomic) unsigned int validExposeTimeMs;
@property (nonatomic) unsigned int extraCalcExposeTimeMs;
@property (nonatomic) unsigned int newValidExposeTimeMs;

+ (void)initialize;

@end
