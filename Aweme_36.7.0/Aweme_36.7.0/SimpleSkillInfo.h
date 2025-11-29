@class NSString;

@interface SimpleSkillInfo : IESLivePBBaseMessage

@property (nonatomic) long long skillId;
@property (copy, nonatomic) NSString *skillName;
@property (nonatomic) long long templateId;
@property (copy, nonatomic) NSString *sendText;
@property (copy, nonatomic) NSString *iconURL;

+ (id)descriptor;

@end
