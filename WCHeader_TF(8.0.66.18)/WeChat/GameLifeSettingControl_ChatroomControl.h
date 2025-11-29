@class GameLifeSettingControl_MultiTaskInfo, GameLifeSettingControl_AtInfo, GameLifeSettingControl_TickleInfo;

@interface GameLifeSettingControl_ChatroomControl : WXPBGeneratedMessage

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) GameLifeSettingControl_MultiTaskInfo *multiTaskInfo;
@property (retain, nonatomic) GameLifeSettingControl_AtInfo *atInfo;
@property (retain, nonatomic) GameLifeSettingControl_TickleInfo *tickleInfo;

+ (void)initialize;

- (void)setTickleInfo:(id)a0;
- (id)tickleInfo;
- (void)setAtInfo:(id)a0;
- (id)atInfo;
- (void)setMultiTaskInfo:(id)a0;
- (id)multiTaskInfo;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;

@end
