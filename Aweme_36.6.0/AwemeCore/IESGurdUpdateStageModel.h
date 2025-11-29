@class NSString, NSDate;

@interface IESGurdUpdateStageModel : NSObject

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL result;
@property (nonatomic) int errCode;
@property (nonatomic) int downloadErrCode;
@property (nonatomic) int failedTimes;
@property (nonatomic) long long backgroundDuration;
@property (retain, nonatomic) NSDate *startTime;

- (void)putDataToDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrefix:(id)a0;

@end
