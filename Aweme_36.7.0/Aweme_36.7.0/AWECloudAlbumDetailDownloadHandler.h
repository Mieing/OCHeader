@class NSString, NSDictionary, UIView, NSMutableArray, EcClient;
@protocol AWECADDHandlerDataSource, ACCUIAlertViewProtocol, AWECADDHandlerDelegate, ACCProcessViewProtcol;

@interface AWECloudAlbumDetailDownloadHandler : NSObject <EcTaskChangeProtocol>

@property (weak, nonatomic) id<AWECADDHandlerDataSource> dataSource;
@property (retain, nonatomic) EcClient *client;
@property (retain, nonatomic) NSString *taskKey;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSDictionary *curAssetDict;
@property (weak, nonatomic) UIView<ACCProcessViewProtcol> *progressView;
@property (nonatomic) long long localAssetSize;
@property (nonatomic) long long localSaveDoneSize;
@property long long saveContext;
@property (retain) NSMutableArray *failedAssets;
@property (retain) NSMutableArray *successAssets;
@property (nonatomic) BOOL isRunning;
@property (weak, nonatomic) id<ACCUIAlertViewProtocol> curAlertView;
@property (weak, nonatomic) id<ACCUIAlertViewProtocol> retryAlertView;
@property (weak, nonatomic) id<AWECADDHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkAvailableDownloadFreeSpace:(id)a0;
+ (long long)fileSystemFreeSize;

- (void)taskItemChanges:(id)a0;
- (void)taskProgressChanges:(id)a0;
- (void)taskStateChanges:(id)a0;
- (void)networkStateChange;
- (void)cancleDownloadTaskWithCompletion:(id /* block */)a0;
- (void)startDownloadTaskWithAssetIds:(id)a0;
- (void)addFailedAssets:(id)a0;
- (void)checkCompleted;
- (void)addSuccessDownloadAssets:(id)a0;
- (void)showDownloadProgress;
- (BOOL)checkAvailableFreeSpace:(id)a0;
- (void)resetDownloadContext;
- (void)startSaveLocalAssets:(id)a0 totalAssetSize:(long long)a1;
- (void)startSaveCloudAssets:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (void)download:(id)a0;

@end
