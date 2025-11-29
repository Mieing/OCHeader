@class NSString, NSData, BaseResponse;

@interface FinderCreateAigcTaskResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) unsigned int queryInterval;
@property (nonatomic) unsigned int queryMaxTimes;
@property (retain, nonatomic) NSData *contextBuff;
@property (nonatomic) unsigned int showLongWaitButton;
@property (nonatomic) unsigned int estimatedAigcWaitTime;

+ (void)initialize;

@end
