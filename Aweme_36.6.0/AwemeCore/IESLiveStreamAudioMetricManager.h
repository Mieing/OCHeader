@class NSString;

@interface IESLiveStreamAudioMetricManager : NSObject <IESLivePlayerControllerDelegate>

@property (nonatomic) BOOL hasSetUpLiveStreamAudioMetric;
@property unsigned long long tryDownLoadCount;
@property BOOL isProcessDownLoadModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkLiveStreamAudioMetricEnable;
+ (id)shareInstance;

- (void)streamAudioBalanceModelNotExist:(id)a0;
- (void)configAndStartStreamAudioMetric;
- (void)downLoadStreamAudioMetricModel:(id)a0;

@end
