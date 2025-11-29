@class NSString, NSData, GameWelfareImgInfo;

@interface GameWelfareTaskInfo : WXPBGeneratedMessage

@property (retain, nonatomic) GameWelfareImgInfo *taskImgInfo;
@property (nonatomic) BOOL showDegreeOfCompletion;
@property (nonatomic) unsigned int degreeOfCompletion;
@property (retain, nonatomic) NSString *taskProcessColor;
@property (retain, nonatomic) NSString *taskDesc;
@property (nonatomic) unsigned int taskCompleted;
@property (retain, nonatomic) NSData *reportExtInfo;
@property (retain, nonatomic) NSString *taskId;

+ (void)initialize;

@end
