@class NSString, NSMutableArray;

@interface IESEffectDownloadProgressManager : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double fixedProgress;
@property (nonatomic) double effectDownloadProgress;
@property (nonatomic) long long allNeedDownloadCount;
@property (nonatomic) long long downloadedAlgorithmModelCount;
@property (retain, nonatomic) NSMutableArray *progressBlockArray;
@property (nonatomic) BOOL hasSetEffectCount;
@property (nonatomic) BOOL hasSetAlgorithmModelCount;

- (void)notifyProgress;
- (void)notifyEffectDownloadProgress:(double)a0;
- (void)notifyAlgorithmModelDownloaded;
- (void)manageProgressBlock:(id /* block */)a0;
- (void)manageAlgorithmModelCount:(long long)a0;
- (void)manageEffectCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
