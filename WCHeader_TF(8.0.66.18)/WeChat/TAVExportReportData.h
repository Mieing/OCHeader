@class NSString;

@interface TAVExportReportData : NSObject

@property (nonatomic) double exportCostTime;
@property (nonatomic) BOOL exportSuccess;
@property (nonatomic) double avgFrameRenderTime;
@property (nonatomic) double fileDuration;
@property (nonatomic) long long fps;
@property (copy, nonatomic) NSString *errorMessage;

- (void).cxx_destruct;

@end
