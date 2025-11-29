@class NSString, NSMutableArray;

@interface ActivityStage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *stageId;
@property (retain, nonatomic) NSString *stageName;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) NSMutableArray *stageBoardInfo;

+ (void)initialize;

@end
