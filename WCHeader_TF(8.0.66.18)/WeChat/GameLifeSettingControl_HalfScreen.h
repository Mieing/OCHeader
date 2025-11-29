@interface GameLifeSettingControl_HalfScreen : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int screenHeightDp;
@property (nonatomic) float screenHeightPercent;

+ (void)initialize;

- (void)setScreenHeightPercent:(float)a0;
- (float)screenHeightPercent;
- (void)setScreenHeightDp:(unsigned int)a0;
- (unsigned int)screenHeightDp;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
