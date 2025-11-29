@interface AdvertisementExtInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int maxAdCount;
@property (nonatomic) unsigned int adInsertPos;

+ (void)initialize;

- (void)setAdInsertPos:(unsigned int)a0;
- (unsigned int)adInsertPos;
- (void)setMaxAdCount:(unsigned int)a0;
- (unsigned int)maxAdCount;

@end
