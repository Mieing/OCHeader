@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CameraScanOperateReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calcuteQueue;
@property (nonatomic) BOOL hasReported;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) int avgBrightness;
@property (nonatomic) unsigned int brightnessCount;
@property (retain, nonatomic) NSString *dataExtraInfo;
@property (nonatomic) unsigned int codeDetectionCount;
@property (nonatomic) unsigned long long codeDetectionType;
@property (nonatomic) unsigned long long codeDetectionSize;
@property (retain, nonatomic) NSString *codeDetectionLocation;
@property (nonatomic) unsigned long long codeEnhance;
@property (nonatomic) unsigned long long codeBinary;
@property (nonatomic) unsigned long long codeParsePhase;
@property (nonatomic) unsigned long long codeParseEnchance;
@property (nonatomic) BOOL enableCodeTrace;
@property (retain, nonatomic) NSString *codeExtraInfo;
@property (retain, nonatomic) NSString *cpKey;
@property (nonatomic) unsigned long long dataProcessEnchance;
@property (nonatomic) unsigned int startType;
@property (nonatomic) unsigned int frameCount;
@property (nonatomic) BOOL isSuccessAfterDataProcess;
@property (nonatomic) BOOL isSuccessAfterDataCollection;
@property (nonatomic) BOOL isSuccessAfterDataGray;
@property (retain, nonatomic) NSString *dataResolution;
@property (nonatomic) BOOL isSuccessPicUpload;
@property (nonatomic) BOOL isSuccessAfterObjDetection;
@property (nonatomic) BOOL isSuccessAfterObjParse;

- (void)updateDataEnhanceType;
- (id)init;
- (void)reset;
- (void)report:(unsigned int)a0;
- (void)updateDataBrightness:(float)a0;
- (void)updateCodeResult:(struct QBarSnapshot { int x0; int x1; struct vector<QBarSnapshot::Target, std::allocator<QBarSnapshot::Target>> { struct Target *x0; struct Target *x1; struct __compressed_pair<QBarSnapshot::Target *, std::allocator<QBarSnapshot::Target>> { struct Target *x0; } x2; } x2; })a0;
- (void)runASyncOnOperateReporterQueue:(id /* block */)a0;
- (void).cxx_destruct;

@end
