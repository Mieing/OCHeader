@interface SportGoalUpload : WXPBGeneratedMessage

@property (nonatomic) unsigned int sportGoalTypeId;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int showIndex;
@property (nonatomic) double current;
@property (nonatomic) double goal;
@property (nonatomic) unsigned int timestamp;

+ (void)initialize;

@end
