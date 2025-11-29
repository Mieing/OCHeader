@class NSString, GameLifeSettingControl_WeappJumpInfo, GameLifeSettingControl_HalfScreen;

@interface GameLifeSettingControl_JumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) GameLifeSettingControl_WeappJumpInfo *weappJumpInfo;
@property (retain, nonatomic) GameLifeSettingControl_HalfScreen *halfScreen;

+ (void)initialize;

- (void)setHalfScreen:(id)a0;
- (id)halfScreen;
- (void)setWeappJumpInfo:(id)a0;
- (id)weappJumpInfo;
- (void)setJumpUrl:(id)a0;
- (id)jumpUrl;
- (void)setJumpType:(unsigned int)a0;
- (unsigned int)jumpType;

@end
