@interface FinderLbsSameCityConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int openCitySwitch;
@property (nonatomic) unsigned int refreshDistance;

+ (void)initialize;

- (void)setRefreshDistance:(unsigned int)a0;
- (unsigned int)refreshDistance;
- (void)setOpenCitySwitch:(unsigned int)a0;
- (unsigned int)openCitySwitch;

@end
