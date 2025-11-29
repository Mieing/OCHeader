@interface SeasonConfig : IESLivePBBaseMessage

@property (nonatomic) BOOL seasonPointShowSwitch;
@property (nonatomic) BOOL userGradeShowSwitch;

+ (id)descriptor;

@end
