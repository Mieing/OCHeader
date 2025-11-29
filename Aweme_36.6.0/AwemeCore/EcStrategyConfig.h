@interface EcStrategyConfig : NSObject

@property (nonatomic) long long uploadConcurrent;
@property (nonatomic) long long uploadFailedRetry;
@property (nonatomic) long long downloadConcurrent;
@property (nonatomic) long long downloadFailedRetry;
@property (nonatomic) double maxUploadFileBytes;
@property (nonatomic) double maxUploadVideoDuration;

@end
