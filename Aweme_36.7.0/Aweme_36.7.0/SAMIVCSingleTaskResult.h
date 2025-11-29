@class NSString, SAMIVCPerfomanceData, AVURLAsset, NSURL, NSNumber, NSError;

@interface SAMIVCSingleTaskResult : NSObject

@property (retain, nonatomic) NSNumber *taskID;
@property (copy, nonatomic) NSString *speakerID;
@property (retain, nonatomic) AVURLAsset *originAsset;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) NSURL *vcAsset;
@property (nonatomic) long long errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *requestTaskID;
@property (nonatomic) unsigned long long errPhase;
@property (retain, nonatomic) SAMIVCPerfomanceData *performanceData;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
