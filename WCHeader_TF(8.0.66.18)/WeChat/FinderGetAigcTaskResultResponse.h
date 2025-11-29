@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetAigcTaskResultResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int queryInterval;
@property (nonatomic) unsigned int queryMaxTimes;
@property (nonatomic) BOOL isFinished;
@property (retain, nonatomic) NSData *contextBuff;
@property (retain, nonatomic) NSMutableArray *assetList;
@property (nonatomic) unsigned int estimatedAigcWaitTime;
@property (nonatomic) unsigned int completionPercentage;
@property (nonatomic) unsigned int maxWaitingTime;

+ (void)initialize;

@end
