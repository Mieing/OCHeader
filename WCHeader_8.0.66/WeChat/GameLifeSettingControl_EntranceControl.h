@class GameLifeSettingControl_WordingControl;

@interface GameLifeSettingControl_EntranceControl : WXPBGeneratedMessage

@property (retain, nonatomic) GameLifeSettingControl_WordingControl *wordingSetting;
@property (nonatomic) BOOL disableWording;
@property (nonatomic) BOOL disableIcon;

+ (void)initialize;

- (void)setDisableIcon:(BOOL)a0;
- (BOOL)disableIcon;
- (void)setDisableWording:(BOOL)a0;
- (BOOL)disableWording;
- (void)setWordingSetting:(id)a0;
- (id)wordingSetting;

@end
