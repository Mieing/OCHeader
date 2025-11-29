@class NSString;

@interface SportGoal : WXPBGeneratedMessage

@property (nonatomic) unsigned int sportGoalTypeId;
@property (nonatomic) unsigned int showType;
@property (nonatomic) double current;
@property (nonatomic) double goal;
@property (nonatomic) unsigned int showIndex;
@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) NSString *sportGoalName;
@property (retain, nonatomic) NSString *sportGoalUnit;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

- (id)description;

@end
