@class NSString, GameLifeSettingControl_JumpWeappInfo;

@interface GameLifeSettingControl_GiftEntranceControl : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) GameLifeSettingControl_JumpWeappInfo *jumpWeapp;

+ (void)initialize;

- (void)setJumpWeapp:(id)a0;
- (id)jumpWeapp;
- (void)setJumpUrl:(id)a0;
- (id)jumpUrl;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
