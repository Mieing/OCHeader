@class NSString, GameLifeSettingControl_JumpInfo;

@interface GameLifeSettingControl_MultiTaskInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *taskName;
@property (retain, nonatomic) GameLifeSettingControl_JumpInfo *educationJumpInfo;

+ (void)initialize;

- (void)setEducationJumpInfo:(id)a0;
- (id)educationJumpInfo;
- (void)setTaskName:(id)a0;
- (id)taskName;

@end
