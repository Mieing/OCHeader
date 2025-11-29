@class NSString, NSArray, AWEIMBotSkillSwitchInfo;

@interface AWEIMBotSkill : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, nonatomic) NSArray *filteredGroupTypes;
@property (readonly, nonatomic) AWEIMBotSkillSwitchInfo *switchInfo;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
