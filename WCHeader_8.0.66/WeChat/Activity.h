@class NSString, NSMutableArray;

@interface Activity : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) NSMutableArray *stages;
@property (nonatomic) unsigned int beginTimeS;
@property (nonatomic) unsigned int endTimeS;

+ (void)initialize;

@end
