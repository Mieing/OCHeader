@interface FinderSlideUpGuideConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int guideAppearTime;
@property (nonatomic) unsigned int guideDisappearTime;
@property (nonatomic) unsigned int guideAppearFrequency;
@property (nonatomic) unsigned int appearTimeSecond;
@property (nonatomic) unsigned int appearTimePercent;
@property (nonatomic) unsigned int disappearTimeSecond;
@property (nonatomic) unsigned int frequencyLimit;

+ (void)initialize;

- (void)setFrequencyLimit:(unsigned int)a0;
- (unsigned int)frequencyLimit;
- (void)setDisappearTimeSecond:(unsigned int)a0;
- (unsigned int)disappearTimeSecond;
- (void)setAppearTimePercent:(unsigned int)a0;
- (unsigned int)appearTimePercent;
- (void)setAppearTimeSecond:(unsigned int)a0;
- (unsigned int)appearTimeSecond;
- (void)setGuideAppearFrequency:(unsigned int)a0;
- (unsigned int)guideAppearFrequency;
- (void)setGuideDisappearTime:(unsigned int)a0;
- (unsigned int)guideDisappearTime;
- (void)setGuideAppearTime:(unsigned int)a0;
- (unsigned int)guideAppearTime;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
