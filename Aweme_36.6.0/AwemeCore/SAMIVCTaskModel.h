@class NSString, SAMIVCPerfomanceData, AVURLAsset, NSURL, NSNumber;

@interface SAMIVCTaskModel : NSObject

@property (copy, nonatomic) NSString *speakerKey;
@property (retain, nonatomic) NSNumber *taskID;
@property (retain, nonatomic) NSNumber *subTaskID;
@property (copy, nonatomic) NSString *speakerID;
@property (copy, nonatomic) AVURLAsset *originAsset;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSURL *exportedAsset;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *vcURL;
@property (copy, nonatomic) NSURL *vcAsset;
@property (retain, nonatomic) SAMIVCPerfomanceData *performanceData;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSString *vcAssetSavePath;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (nonatomic) unsigned long long errPhase;
@property (copy, nonatomic) NSString *requestTaskID;

- (id)initWithTaskID:(id)a0 subTaskID:(id)a1 speakerID:(id)a2 asset:(id)a3 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;
- (void)updateErrorCode:(long long)a0 msg:(id)a1 requestTaskID:(id)a2 atPhase:(unsigned long long)a3;
- (void).cxx_destruct;

@end
