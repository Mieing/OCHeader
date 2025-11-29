@class NSString;

@interface GetSingleTimeLimitPkRecordsReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;

+ (id)descriptor;

@end
