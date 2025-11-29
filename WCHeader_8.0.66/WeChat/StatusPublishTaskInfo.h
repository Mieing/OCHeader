@class NSString, StatusInfo, NSMutableArray;

@interface StatusPublishTaskInfo : WXPBGeneratedMessage

@property (retain, nonatomic) StatusInfo *statusInfo;
@property (retain, nonatomic) NSMutableArray *mediaInfos;
@property (nonatomic) BOOL cdnSuccess;
@property (nonatomic) int postRetryNum;
@property (nonatomic) int publishType;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL mediaExchange;

+ (void)initialize;

@end
