@class NSDictionary, NSMutableArray, NSString;

@interface HMDCaptureBacktraceManager : NSObject

@property (nonatomic, setter=setValid:) BOOL isValid;
@property (nonatomic) long long startTime;
@property (nonatomic) long long finishTime;
@property (retain, nonatomic) NSMutableArray *backtraces;
@property (copy, nonatomic) NSDictionary *imageUUIDMap;
@property (nonatomic) long long backtraceThreshold;
@property (nonatomic) long long errorTime;
@property (copy, nonatomic) NSString *sceneType;

+ (id)fetchCurrenImageList;

- (void)preparImageUUIDMap;
- (void)finishRecord:(BOOL)a0 withReportBlock:(id /* block */)a1;
- (id)CaptureBacktracesReportData;
- (void)processRecord:(id /* block */)a0;
- (void)dropRecord;
- (id)getCaptureBacktraces;
- (void).cxx_destruct;
- (id)init;
- (void)addBacktrace:(id)a0;
- (id)reportDictionary;

@end
