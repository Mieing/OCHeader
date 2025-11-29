@class NSString;

@interface IESLiveStreamAudioBalanceManager : NSObject <IESLivePlayerControllerDelegate>

@property (nonatomic) BOOL hasSetUpLiveStreamAudioBalance;
@property unsigned long long tryDownLoadCount;
@property BOOL isProcessDownLoadModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkLiveStreamAudioBalanceEnable;
+ (id)shareInstance;

- (void)streamAudioBalanceModelNotExist:(id)a0;
- (void)configAndStartStreamAudioBalance;
- (void)downLoadStreamAudioBalance:(id)a0;

@end
