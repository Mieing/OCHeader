@class NSString;

@interface TaskProgressItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int gainIntimacy;
@property (nonatomic) unsigned int curComplete;
@property (nonatomic) unsigned int maxComplete;
@property (nonatomic) unsigned int taskType;
@property (nonatomic) unsigned int taskDailyMaxIntimacy;

+ (void)initialize;

@end
