@class NSString, NSArray, SAMIVCPerfomanceData, NSError, NSNumber;

@interface SAMIVCMultiTaskResult : NSObject

@property (retain, nonatomic) NSNumber *taskID;
@property (copy, nonatomic) NSString *speakerID;
@property (copy, nonatomic) NSArray *multiResults;
@property (nonatomic) BOOL canceled;
@property (nonatomic) long long errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *requestTaskID;
@property (nonatomic) unsigned long long errPhase;
@property (retain, nonatomic) SAMIVCPerfomanceData *performanceData;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
