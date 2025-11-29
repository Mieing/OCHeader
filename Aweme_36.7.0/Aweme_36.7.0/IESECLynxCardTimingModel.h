@class NSError, NSDictionary;

@interface IESECLynxCardTimingModel : NSObject

@property (nonatomic) BOOL isPreloader;
@property (nonatomic) BOOL isFirstReport;
@property (nonatomic) double startLoadingTime;
@property (nonatomic) double startFetchTemplateTime;
@property (nonatomic) double finishFetchTemplateTime;
@property (nonatomic) double finishLoadingTime;
@property (nonatomic) double firstScreenTime;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *lynxPerfDict;
@property (copy, nonatomic) NSDictionary *lynxSetupPerfDict;
@property (copy, nonatomic) NSDictionary *lynxUpdatePerfDict;

- (void).cxx_destruct;
- (id)init;

@end
