@class NSError;

@interface IESEffectDownloadResultInfo : NSObject

@property (nonatomic) unsigned long long downloadAlgorithmModelCount;
@property (nonatomic) unsigned long long dependentAlgorithmModelCount;
@property (nonatomic) double unzipTime;
@property (nonatomic) double md5HashTime;
@property (nonatomic) BOOL isParallelDownload;
@property (nonatomic) double effectDonwloadTime;
@property (nonatomic) double algorithmModelDownloadTime;
@property (retain, nonatomic) NSError *algorithmModelDownloadError;
@property (retain, nonatomic) NSError *effectDownloadError;
@property (nonatomic) unsigned long long networkType;
@property (nonatomic) BOOL hitCache;

- (void).cxx_destruct;
- (id)init;

@end
