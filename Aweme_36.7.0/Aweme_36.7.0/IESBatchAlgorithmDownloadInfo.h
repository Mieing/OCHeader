@interface IESBatchAlgorithmDownloadInfo : NSObject

@property (nonatomic) double beginDownloadTimeStamp;
@property (nonatomic) unsigned long long algorithmModelCount;
@property (nonatomic) unsigned long long downloadAlgorithmModelCount;
@property (nonatomic) unsigned long long downloadAlgorithmModelSize;
@property (nonatomic) unsigned long long downloadAlgorithmModelDuration;
@property (nonatomic) double downloadEffectDuration;
@property (nonatomic) double totalDownloadDuration;

@end
